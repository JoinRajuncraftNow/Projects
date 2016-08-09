using namespace std; //For misc. functions and stuff.
#ifndef MISC_H
#define MISC_H
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
int gen(int x, int y) //Generates a random number between x and y.
{
	return rand()%(y-x+1)+x;
}

//MAP FUNCTIONS
int mapgen()
{
	cout << "Generating Map..." << endl; //Randomly generates map.
	while(x<100)
	{
		while(y<100)
		{
			while(z<5)
			{
				map[x][y][z]=gen(1,10);
				z++;
			}
			y++;
			z=0;
		}
		x++;
		y=0;
	}
	map[99][99][0]=11;
	x=0; //y is already 0!
	z=4;
}
#endif
