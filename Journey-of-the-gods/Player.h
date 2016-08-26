#ifndef PLAYER_H
#define PLAYER_H
using namespace std; //All inventory, health, and other stuff.
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
extern int secondary;
extern int raceid;
extern string enemy;
extern int damage;
extern int map[200][200][3];
extern int visited[200][200][3]; //for quests or how peeps react to you.
extern int medkit[200][200][3]; //for shops
extern int armor[200][200][3]; //for shops
extern int weapon[200][200][3]; //for shops
void forward() //Don't remember if I can do this here, so I will just assume I can until I can test it.
{
  y++;
}
void backward()
{
  y--;
}
void left()
{
  x--;
}
void right()
{
  x++;
}
void up()
{
  z++;
}
void down()
{
  z--;
}
#endif
