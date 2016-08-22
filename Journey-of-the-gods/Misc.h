using namespace std; //For misc. functions and stuff.
#ifndef MISC_H
#define MISC_H
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
int gen(int x, int y) //Generates a random number between x and y.
{
	return rand()%(y-x+1)+x;
}

//MAP FUNCTIONS
void mapgen()
{
	cout << "Generating Map..." << endl; //Randomly generates map.
	while(x<100)
	{
		while(y<100)
		{
			while(z<5)
			{
				map[x][y][z]=gen(1,50); 
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
void tile()
{
	/*
	Think we could make actual realistic map generation? It would take some thinking, but I think we could do it. Especially at this small of a scale.
	*/
	switch(map[x][y][z])
	{
	case 1:
		//forest
		break;
	case 2:
		//clearing
		break;
	case 3:
		//mountains
		break;
	case 4:
		//hills
		break;
	case 5:
		//plains
		break;
	case 6:
		//river
		break;
	case 7:
		//city (may make you able to enter city.)
		break;
	case 8:
		//cottage
		break;
	case 9:
		//swamp
		break;
	case 10:
		//lake
		break;
	case 11:
		//stuff
		break;
	case 12;
		//stuff
		break;
	case 13:
		//stuff
		break;
	case 14:
		//stuff
		break;
	case 15:
		//stuff
		break;
	case 16:
		//stuff
		break;
	case 17:
		//stuff
		break;
	case 18:
		//stuff
		break;
	case 19:
		//stuff
		break;
	case 20:
		//stuff
		break;
	case 21:
		//stuff
		break;
	case 22:
		//stuff
		break;
	case 23:
		//stuff
		break;
	case 24:
		//stuff
		break;
	case 25:
		//stuff
		break;
	case 26:
		//stuff
		break;
	case 27:
		//stuff
		break;
	case 28:
		//stuff
		break;
	case 29:
		//stuff
		break;
	case 30:
		//stuff
		break;
	case 31:
		//stuff
		break;
	case 32:
		//stuff
		break;
	case 33:
		//stuff
		break;
	case 34:
		//stuff
		break;
	case 35:
		//stuff
		break;
	case 36:
		//stuff
		break;
	case 37:
		//stuff
		break;
	case 38:
		//stuff
		break;
	case 39:
		//stuff
		break;
	case 40:
		//stuff
		break;
	case 41:
		//stuff
		break;
	case 42:
		//stuff
		break;
	case 43:
		//stuff
		break;
	case 44:
		//stuff
		break;
	case 45:
		//stuff
		break;
	case 46:
		//stuff
		break;
	case 47:
		//stuff
		break;
	case 48:
		//stuff
		break;
	case 49:
		//stuff
		break;
	case 50:
		//stuff
		break;
	default:
		while(1)
		{
			cout << "YOU GOT OUT OF THE MATRIX, AHHHH!";
		}
		break;
	}
}
#endif
