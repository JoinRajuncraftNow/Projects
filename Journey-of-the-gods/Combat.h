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
extern int emenyarmor;
extern int playerweapon;
extern int secondary;
extern int raceid;
extern string enemy;
extern int map[200][200][3];
extern int visited[200][200][3]; //for quests or how peeps react to you.
extern int medkit[200][200][3]; //for shops
extern int armor[200][200][3]; //for shops
extern int weapon[200][200][3]; //for shops
void combat() //This is where the combat will be.
{
  enemyid=gen(1, 5);
  ehelm=gen(1, 3); //1 is 0% defence, 2 is 4% defence, and 3 is 10% defence.
  echest=gen(1, 3);
  eleggings=gen(1, 3);
  eboots=gen(1, 3);
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
    enemy="Undead Bandit";
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
}

int adamage()
{
  switch(primary)
  {
  case 1:
    damage=gen(10, 20);
    break;
  case 2:
    damage=gen(20, 40);
    break;
  case 3:
    damage=gen(2, 10);
    break;
  case 4:
    damage=gen(5, 25);
    break;
  default: 
    damage=gen(1, 5);
    break;
  }
  return -1;
}
void death()
{
  //No return -1 for a placeholder, as it is void
}
void do_damage(int& damage, int& health) //You can't have a function damage and a variable damage at the same time.
{
  health-=damage;
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
