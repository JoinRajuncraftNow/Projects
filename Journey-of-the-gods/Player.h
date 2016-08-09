using namespace std; //All inventory, health, and other stuff.
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
void forward(int& y) //Don't remember if I can do this here, so I will just assume I can until I can test it.
{
  y++;
}
void backward(int& y)
{
  y--;
}
void left(int& x)
{
  x--;
}
void right(int& x)
{
  x++;
}
void up(int& z)
{
  z++;
}
void down(int& z)
{
  z--;
}
