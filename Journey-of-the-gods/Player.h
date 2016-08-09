using namespace std; //All inventory, health, and other stuff.
extern killcount, x, y, z, health, magic, helm, chest, leggings, boots, quest, enemyid, ehealth, ehelm, echest, eleggings, eboots, damage, primary, secondary, raceid;
extern map[100][100][5];
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
