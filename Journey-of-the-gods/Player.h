#ifndef PLAYER_H
#define PLAYER_H
using namespace std; //All inventory, health, and other stuff.
#include "headers.h"
extern int gold;
extern int killcount;
extern int medkit;
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
extern string enemy;
extern int damage;
extern int map[200][200][3];
extern int visited[200][200][3]; //for quests or how peeps react to you.
extern int smedkit[200][200][3]; //for shops
extern int armor[200][200][3]; //for shops
extern int weapon[200][200][3]; //for shops
void forward() //Don't remember if I can do this here, so I will just assume I can until I can test it.
{
  if(y!=199)
  {
    y++;
  }
}
void backward()
{
  if(y!=0)
  {
    y--;
  }
}
void left()
{
  if(x!=0)
  {
    x--;
  }
}
void right()
{
  if(x!=199)
  {
    x++;
  }
}
void up()
{
  if(z!=2)
  {
    z++;
  }
}
void down()
{
  if(z!=0)
  {
    z--;
  }
}
#endif
