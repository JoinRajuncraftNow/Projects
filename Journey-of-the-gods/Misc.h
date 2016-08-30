using namespace std; //For misc. functions and stuff.
#ifndef MISC_H
#define MISC_H
#include "headers.h"
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
extern int map[200][200][3]; //that might just be a LITTLE too big.
extern int visited[200][200][3]; //for quests or how peeps react to you.
extern int medkit[200][200][3]; //for shops
extern int armor[200][200][3]; //for shops
extern int weapon[200][200][3]; //for shops
int gen(int d, int g) //Generates a random number between x and y.
{
	return rand()%(g-d+1)+d; //OUTPUTS ONLY 6!!! WTF
}

//MAP FUNCTIONS
void tile()
{
	switch(map[x][y][z])
	{
	case 1:
		cout << "------FOREST------"; //forest
		break;
	case 2:
		cout << "------CLEARING------"; //clearing
		break;
	case 3:
		cout << "------PLAINS------"; //plains
		break;
	case 4:
		cout << "------HILLS------"; //hills
		break;
	case 5:
		cout << "------MOUNTAINS------"; //mountains
		break;
	case 6:
		cout << "------DESERT------"; //desert
		break;
	case 7:
		cout << "------TRADING STATION-------"; //trading station
		break;
	case 8:
		cout << "------CITY-------"; //city
		break;
	case 9:
		cout << "------TOWN-------"; //town
		break;
	case 10:
		cout << "------SETTLEMENT-------"; //settlement
		break;
	case 11:
		//stuff
		break;
	case 12:
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
void mapgen()
{
	int prevy=0, prevx=0, random=0;
	cout << "Generating Map..." << endl;
	x=0;
	y=0;
	z=2; //I WANT TO KILL MYSELF RIGHT NOW
	map[x][y][z]=gen(1,6);
	x++;
	/*while(z>0)
	{*/
		int testtilevalue=0, tiley, tilex;
		while(y<200)//LOL it outputs nothing but ?'s'
		{
			while(x<200)
			{
				visited[x][y][z]=0;
				prevy=y-1;
				prevx=x-1;
				tiley=map[x][prevy][z];
				tilex=map[prevx][y][z];
				if(y>0)
				{
					if(tilex-tiley==2||tilex-tiley==-2)
					{
						testtilevalue=(map[prevx][y][z]+map[x][prevy][z])/2;
					}else{
						testtilevalue=map[x][prevy][z];
					}					
					switch(testtilevalue)
					{
					case 1:
						map[x][y][z]=gen(1,2);	
						break;
					case 2:
						map[x][y][z]=gen(1,3);
						break;
					case 3:
						map[x][y][z]=gen(2,4);
						break;
					case 4:
						map[x][y][z]=gen(3,5);
						break;
					case 5:
						map[x][y][z]=gen(4,6);
						break;
					case 6:
						map[x][y][z]=gen(5,7);
						if(map[x][y][z]=7)
						{
							map[x][y][z]=3;	
						}
						break;
					default:
						while(1)
						{
							cout << "YOU GOT OUT OF THE MATRIX, AHHHH!";
						}
						break;
					}
				}else{
					switch(map[prevx][y][z])
					{
					case 1:
						map[x][y][z]=gen(1,2);	
						break;
					case 2:
						map[x][y][z]=gen(1,3);
						break;
					case 3:
						map[x][y][z]=gen(2,4);
						break;
					case 4:
						map[x][y][z]=gen(3,5);
						break;
					case 5:
						map[x][y][z]=gen(4,6);
						break;
					case 6:
						map[x][y][z]=gen(5,7);
						if(map[x][y][z]=7)
						{
							map[x][y][z]=3;	
						}
						break;
					default:
						while(1)
						{
							cout << "YOU GOT OUT OF THE MATRIX, AHHHH!!!";
						}
						break;
					}
				}
				x++;
			}
			y++;
			x=0;
			cout << endl;
		}
		y=0;
		/*z--;
	}*/
	x=0;
	y=0;
	z=2;
	cout << "Placing Enemies..." << endl;
	map[x][y][z]=gen(1,6);
	x++;
	/*while(z>0)
	{*/
		while(y<200)//LOL it outputs nothing but ?'s'
		{
			while(x<200)
			{
				if(gen(1,5)==1)
				{
					map[x][y][z]=map[x][y][z]+10;
				}else if(gen(1,10)==1)
				{
					map[x][y][z]=gen(7,10);	
					switch(map[x][y][z])
					{
					case 7: //trading station
						weapon[x][y][z]=1; //If someone upgrades their weapon at a trading station, this is how much damage is added to their current weapon. It is set to 0 once the player buys it.
						armor[x][y][z]=1; //Same as weapon but for armor
						medkit[x][y][z]=gen(2,3); //How many medkits this place has to buy
						break;
					case 8: //city
						weapon[x][y][z]=gen(8,10);
						armor[x][y][z]=gen(8,10);
						medkit[x][y][z]=gen(15,20);
						break;
					case 9: //town
						weapon[x][y][z]=gen(4,6);
						armor[x][y][z]=gen(4,6);
						medkit[x][y][z]=gen(8,13);
						break;
					case 10: //settlement
						weapon[x][y][z]=gen(2,4);
						armor[x][y][z]=gen(2,4);
						medkit[x][y][z]=gen(3,8);
						break;
					default:
						while(1)
						{
							cout << "NEVER GONNA LET YOU GO!!!";
						}
						break;
						
					}
				}
				x++;
			}
			y++;
			x=0;
			cout << endl;
		}
		y=0;
		/*z--;
	}*/
	map[199][199][0]=50;
	y=0;
	x=0;
	z=2;
}
#endif
