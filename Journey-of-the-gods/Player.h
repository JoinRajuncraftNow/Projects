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
extern int helm;
extern int chest;
extern int leggings;
extern int boots;
extern int quest;
extern int enemyid;
extern int ehealth;
extern int ehelm;
extern int echest;
extern int eleggings;
extern int eboots;
extern int damage;
extern int primary;
extern int secondary;
extern int raceid;
extern int map[100][100][5];
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
