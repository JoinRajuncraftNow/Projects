using namespace std; //All combat-related stuff
#ifndef COMBAT_H
#define COMBAT_H
#include <cstdlib>
#include "headers.h"
extern int gold;
extern int killcount;
extern int x;
extern int y;
extern int z;
extern int health;
extern int magic;
extern int playerarmor;
extern int quest;
extern int enemyid;
extern int ehealth;
extern int enemyarmor;
extern int playerweapon;
extern char raceid;
extern int medkit;
extern string enemy;
extern int damage;
extern int map[200][200][3];
extern int visited[200][200][3]; //for quests or how peeps react to you.
extern int smedkit[200][200][3]; //for shops
extern int armor[200][200][3]; //for shops
extern int weapon[200][200][3]; //for shops
int MAKE_POS(int s)
{
    return s > 0 ? s : -s;
}
int playerdamagecalc(int d, int rv)
{
	if((rv=gen(20,40))+playerweapon>=enemyarmor)
        {
        	d=rv-enemyarmor+playerweapon/2;	
        	switch(raceid)
        	{
        	case '1':
        		return d;
        		break;
        	case '2':
        		d=d*3;
        		return d/4;
        		break;
        	case '3':
        		return d*2;
        		break;
        	case '4':
        		if(z==2)
        		{
        			return d;
        		}else if(z==1){
        			return d*2;
        		}else if(z==0){
        			return d*3;
        		}
        		break;
        	case '5':
        		return d/2;
        		break;
        	default:
        		raceid=-1; //lol
        		break;
        	}
        }else{
        	return 0;
        }
}
int enemydamage(int& enemycharging)
{
	int rv;
    switch(enemyid)
  {
  case 1:
    rv=gen(10,15);
    if(rv+enemycharging>playerarmor)
    {
        return rv+enemycharging-playerarmor;
    }else{
    	return 0;
    }
	break;
  case 2:
    rv=gen(15,25);
    if(rv+enemycharging>playerarmor)
    {
        return rv+enemycharging-playerarmor;
    }else{
    	return 0;
    }
    break;
  case 3:
    rv=gen(15,20);
    if(rv+enemycharging>playerarmor)
    {
        return rv+enemycharging-playerarmor;
    }else{
    	return 0;
    }
    break;
  case 4:
    rv=gen(15,25);
    if(rv+enemycharging>playerarmor)
    {
        return rv+enemycharging-playerarmor;
    }else{
    	return 0;
    }
    break;
  case 5:
    rv=gen(10,15);
    if(rv+enemycharging>playerarmor)
    {
        return rv+enemycharging-playerarmor;
    }else{
    	return 0;
    }
    break;
  default:
    rv = gen(10000,1000000);
    if(rv+enemycharging>playerarmor)
    {
        return rv+enemycharging-playerarmor;
    }else{
    	return 0;
    }
    break;
  }
}
void combat() //This is where the combat will be.
{
  int edamage=0, helping; //nvm
  char combatcommand, counter;
  int rv;
  enemyid=gen(1, 5);
  enemyarmor = gen(1,3);
  switch(enemyid)
  {
  case 1:
    enemy="Bandit";
    ehealth=1000;
    break;
  case 2:
    enemy="Giant Spider";
    ehealth=2000;
    break;
  case 3:
    enemy="Skeleton";
    ehealth=1000;
    break;
  case 4:
    enemy="Zombie Bandit"; //Cause I'm too lazy for a/an
    ehealth=2000;
    break;
  case 5:
    enemy="Wolf";
    ehealth=1000;
    break;
  default: 
    enemy="Glitch";
    ehealth=2147483647; //Maximum value for an integer, let's not have it be negative
    break;
  }
  cout << endl << "A " << enemy << " approaches!" << endl;
  int loop=0, dodgesuccess=0, enemycharging=0; //Heh
  while(health>0&&ehealth>0)
  {
    loop=0;
    while(loop!=1)
    {
	helping=1;
      cout << "Health: " << health << endl << enemy << " Health: " << ehealth << endl << "Command: ";
      cin >> combatcommand; //Maybe that will work?
      //cin.ignore();
      cout << endl;
      switch(combatcommand)
      {
      case 'q': //quick slash
      case 'Q':
        loop=1;
        damage=playerdamagecalc(damage, rv)/2;
        switch(gen(1,2))
        {
        case 1:
	  cout << "Quick Slash!" << endl << "You deal " << damage << " damage!" << endl; //WORKS!
	  ehealth=ehealth-damage;
          break;
        case 2:
        edamage=enemydamage(enemycharging);
          cout << "You attack the enemy, but he manages to counter!" << endl << "You deal " << damage << " damage!" << endl << "Enemy deals " << edamage << " damage!" << endl;
          ehealth=ehealth-damage;
          health=health-edamage;
          break;
        }
        break;
      case 'b': //big slash
      case 'B':
        loop=1;
        damage=playerdamagecalc(damage, rv);
        edamage=enemydamage(enemycharging);
        cout << "You attack the enemy, but he manages to counter!" << endl << "You deal " << damage << " damage!" << endl << "Enemy deals " << edamage << " damage!" << endl;
        ehealth=ehealth-damage;
        health=health-edamage;
        break;
      case 'd': //dodge
      case 'D':
        loop=1;
        if((rv=gen(1,10))<10)
        {
          cout << "You successfully dodged!" << endl;
          enemycharging=0;
        }else{
          edamage=enemydamage(enemycharging);
          health=health-edamage;
          enemycharging=0;
          cout << "You attempt to dodge, but the enemy manages to hit you!" << endl << enemy << " deals " << edamage << " damage!" << endl;
        }
        break;
      case 'm': //medkit
      case 'M':
        loop=1;
        if(medkit>0) 
        {
          cout << "You use a medkit, your health is restored!" << endl;
          medkit--;
          health=1000;
        }else{
          edamage=enemydamage(enemycharging);
          health=health-edamage;
          enemycharging=0;
          cout << "You fumble with your pack, only to realize you are out of medkits!" << endl << enemy << " deals " << edamage << " damage!" << endl;
        }
        break;
      case 'h': //help
      case 'H':
        loop=1;
	helping=1;
        cout << "---COMMANDS---" << endl << "H-Command List" << endl << "Q-Quick Slash" << endl << "B-Big Slash" << endl <<  "D-Dodge" << endl << "M-Medkit" << endl << "S-Spell" << endl << "----------------" << endl;
        break;
      case 's': //spell
      case 'S':
        loop=1;
        break;
      default:
      	cin.clear();
      	cin.ignore(10000,'\n');
        cout << "Unknown command. Type 'h' for help." << endl;
        break;
      }
      if(health<=0)
      {
        cout << "You have died!" << endl; //I may make it output stats or something.
        while(1) { }
      }else if(ehealth<=0){ //THANK YOU!
        cout << enemy << " has been slain!" << endl;
        gold+=gen(10, 25);
        map[x][y][z]-=10;
        enemycharging=1000;
        int cloop=0;
        char choose;
        while(cloop==0)
        {
             cout << "What would you like to loot?" << endl << "1-Armor" << endl << "2-Weapon" << endl << "3-Medkit" << endl;
             cin >> choose;
             switch(choose)
             {
             case '1':
        	     playerarmor++;
              cloop=1;
        	     break;	
             case '2':
        	     playerweapon++;
              cloop=1;
        	     break;
             case '3':
        	     medkit++;
              cloop=1;
        	     break;
             default:
             	     cin.clear();
        	     cin.ignore(10000,'\n');
        	     cout << "Please only choose 1-3!" << endl;
        	     break;
          }
        }
      }
    }
    if(enemycharging==0&&helping==1)
    {
        enemycharging=gen(0,5);
        cout << "The enemy is preparing to attack!" << endl;
    }else{
        if(enemycharging<200&&helping==1)
	{
            enemycharging=enemycharging*2;
        }
     }
  }
}
void death()
{
  //No return -1 for a placeholder, as it is void
}
void do_damage(int& damage_, int& health_) //You can't have a function damage and a variable damage at the same time.
{
  health_-=damage_;
}
//Spells:
int fireball() //Deals medium damage and has a chance of lighting the enemy on fire.
{
  return -1;
}
int freeze() //Deals medium damage and has a chance of freezing the enemy.
{
  return -1;
}
int godwrath() //Deals large amounts of damage, but will rebound and damage the caster.
{
  return -1; //Temporary value
}
int vampire() //Deals no damage, but just sucks a small amount of life out of enemies.
{
  return -1; //Temporary value
}
//Going to consult with creative people for more.
#endif
