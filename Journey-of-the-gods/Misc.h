using namespace std; //For misc. functions and stuff.
#ifndef MISC_H
#define MISC_H
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
extern int map[200][200][3]; //that might just be a LITTLE too big.
extern int visited[200][200][3]; //for quests or how peeps react to you.
extern int smedkit[200][200][3]; //for shops
extern int armor[200][200][3]; //for shops
extern int weapon[200][200][3]; //for shops
void combat();
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
		cout << "------FOREST------" << endl; //forest
		break;
	case 2:
		cout << "------CLEARING------" << endl; //clearing
		break;
	case 3:
		cout << "------PLAINS------" << endl; //plains
		break;
	case 4:
		cout << "------HILLS------" << endl; //hills
		break;
	case 5:
		cout << "------MOUNTAINS------" << endl; //mountains
		break;
	case 6:
		cout << "------DESERT------" << endl; //desert
		break;
	case 7:
		cout << "------TRADING STATION-------" << endl;
		int sloop=1;
		while(sloop==1)
		{
			sloop=0;
			cout << "You are in a Trading Station! You may [1-Talk to the Weaponsmith/2-Talk to the Healer/3-Talk to the Armorer/4-Leave] "; //trading station
			int choice, cost, tinyloop;
			char yesorno;
			cin >> choice;
			cin.ignore(); //Seems to stop some of the bugs. Maybe just with cin.get, though.
			cout << endl;
			switch(choice)
			{
			case 1:
				if(weapon[200][200][3]!=0)
				{
					cost=weapon[x][y][z]*15;
					while(tinyloop==1)
					{
						cout << "It will cost you " << cost << " gold coins to upgrade your weapon by " << weapon[200][200][3] << " damage, would you like to do it? [Y/N] ";
						tinyloop=0;
						cin >> yesorno;
						if(yesorno=='y'||yesorno=='Y'){
							
						}else if(yesorno=='n'||yesorno=='N'){
							
						}else{
							cout << endl << "Please only input Y or N!" << endl;
							tinyloop=1;
						}
					
					}
				} else {
					cout << "The weaponsmith cannot upgrade your weapon any further!";
				}
				break;
			case 2:
				cost=20;
				cout << "It will cost you 20 gold coins per medkit, how many would you like to buy? [1-" << smedkit[x][y][z] << "] ";
				cin >> yesorno;
				break;
			case 3:
				cost=armor[x][y][z]*20;
				cout << "It will cost you " << cost << " gold coins to upgrade your armor, would you like to do it? [Y/N] ";
				cin >> yesorno;
				break;
			case 4:
				sloop=1;
				break;
			default:
				cout << endl << "Please only select 1-4!" << endl;
				break;
			}
		}
		break;
	case 8:
		cout << "------CITY-------" << endl; //city
		break;
	case 9:
		cout << "------TOWN-------" << endl; //town
		break;
	case 10:
		cout << "------SETTLEMENT-------" << endl; //settlement
		break;
	case 11:
		cout << "------FOREST------" << endl; //forest
		combat();
		break;
	case 12:
		cout << "------CLEARING------" << endl; //clearing
		combat();
		break;
	case 13:
		cout << "------PLAINS------" << endl; //plains
		combat();
		break;
	case 14:
		cout << "------HILLS------" << endl; //hills
		combat();
		break;
	case 15:
		cout << "------MOUNTAINS------" << endl; //mountains
		combat();
		break;
	case 16:
		cout << "------DESERT------" << endl; //desert
		combat();
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
	int prevy=0, prevx=0, random_=0;
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
						if(map[x][y][z]==7)
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
						if(map[x][y][z]==7)
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
				if(gen(1,20)==1)
				{
					map[x][y][z]=map[x][y][z]+10;
				}else if(gen(1,50)==1)
				{
					map[x][y][z]=gen(7,10);	
					switch(map[x][y][z])
					{
					case 7: //trading station
						weapon[x][y][z]=1; //If someone upgrades their weapon at a trading station, this is how much damage is added to their current weapon. It is set to 0 once the player buys it.
						armor[x][y][z]=1; //Same as weapon but for armor
						smedkit[x][y][z]=gen(2,3); //How many medkits this place has to buy
						break;
					case 8: //city
						weapon[x][y][z]=gen(8,10);
						armor[x][y][z]=gen(8,10);
						smedkit[x][y][z]=gen(15,20);
						break;
					case 9: //town
						weapon[x][y][z]=gen(4,6);
						armor[x][y][z]=gen(4,6);
						smedkit[x][y][z]=gen(8,13);
						break;
					case 10: //settlement
						weapon[x][y][z]=gen(2,4);
						armor[x][y][z]=gen(2,4);
						smedkit[x][y][z]=gen(3,8);
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
