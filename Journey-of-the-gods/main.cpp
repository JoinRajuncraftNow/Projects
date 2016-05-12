#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include "Combat.h"
#include "Quests.h"
#include "Player.h"
#include "Misc.h"
#define KEY_UP 119
#define KEY_DOWN 115
#define KEY_LEFT 97
#define KEY_RIGHT 100
#define KEY_R 114
#define KEY_F 102
#define KEY_Q 113
#define KEY_E 101
//Define and add other keys for commands.
using namespace std;
void command()
{
	int c=0;
	switch(c=getch())
	{
	case KEY_UP:
		up();    //key up
		break;
	case KEY_DOWN:
		down();   // key down
		break;
	case KEY_LEFT:
		left();  // key left
		break;
	case KEY_RIGHT:
		right();  // key right
		break;
	default:
		cout << endl << "Unknown Command. Type 'H' for help" << endl;  // not valid
		break;
	}
}
/*
Variables:
killcount- Keeps track of how many enemies you have killed. Can be used in quests.
x, y, z- Keeps track of position of player.
health- Player health
helm, chest, leggings, boots- Armor level of differant pieces.
primary, secondary- Things in your hands.
enemy- Name of enemy that you are fighting.
name- Name of player
race- Race of player. (HINT: Use in dialog!)
inv- Inventory of player.
*/
int main()
{
	int killcount, x, y, z, health, helm, chest, leggings, boots, quest, ehealth, ehelm, echest, eleggings, eboots;
	char primary, secondary;
	string enemy, questline, name, race, inv;
	while(1)
	{
		command();
	}
}
