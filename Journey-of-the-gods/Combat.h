using namespace std; //All combat-related stuff
#ifndef COMBAT_H
#define COMBAT_H
#include <cstdlib>
#include "headers.h"
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
extern int raceid;
extern int medkit;
extern string enemy;
extern int damage;
extern int map[200][200][3];
extern int visited[200][200][3]; //for quests or how peeps react to you.
extern int medkit[200][200][3]; //for shops
extern int armor[200][200][3]; //for shops
extern int weapon[200][200][3]; //for shops
int enemydamage()
{
  // damage=gen(10, 20); I am in algebra right now, so I cannot work on dis.
}
void combat() //This is where the combat will be.
{
  int edamage=0;
  char combatcommand, counter;
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
  int loop=0, dodgesuccess=0;
  while(health>0||ehealth<0)
  {
    while(loop!=1)
    {
      cout << "Command: ";
      cin.get(combatcommand);
      endl;
      switch(combatcommand)
      {
      case 'q': //quick slash
        loop=1;
        cout << "Quick Slash!" << endl; //WORKS!
        break;
      case 'b': //big slash
        loop=1;
        cout << "Big Slash!" << endl;
        break;
      case 'd': //dodge
        loop=1;
        cout << "You attempt to dodge!" << endl;
        if(gen(1,10)<10)
        {
          cout << "You successfully dodged!" << endl;
        }else{
          edamage=enemydamage();
          cout << "You attempt to dodge, but the enemy manages to hit you!" << endl << enemy << " deals " << edamage << " damage!" << endl;
        }
        break;
      case 'm': //medkit
        loop=1;
        if(medkit>0) 
        {
          cout << "You use a medkit, your health is restored!" << endl;
          medkit--;
          health=1000;
        }else{
          edamage=enemydamage();
          cout << "You fumble with your pack, only to realize you are out of medkits!" << endl << enemy << " deals " << edamage << " damage!" << endl;
        }
        break;
      case 'h': //help
        loop=1;
        break;
      case 's': //spell
        loop=1;
        break;
      default:
        cout << "Unknown command. Type 'h' for help. Also keep in mind that all commands use lowercase letters." << endl;
        break;
      }
      if(health<=0)
      {
        cout << "You have died!" << endl; //I may make it output stats or something.
        while(1) { }
      }else if(ehealth<=0){
        cout << enemy << " has been slain!" << endl;
      }
    }
  }
}
int enemydamage()
{
  // damage=gen(10, 20); I am in algebra right now, so I cannot work on dis.
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
