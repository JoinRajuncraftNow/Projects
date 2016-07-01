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
magic- Magic level of the player.
*/
int main()
{
	cout << endl << "What is your name? ";
	getline(cin, name);
	cout << "Hello, " << name << " What race will you be?" << endl << "==================================================================" << endl << "1 - Human (Medium strength, agility, and health)" << endl << "2 - Elf (Higher strength, agility, and health. Although, elves cannot use potions to heal themselves)" << endl << "3 - Orc (Very high strength and health, but very low agility)" << endl << "4 - Werecat (Can switch between cat and human forms at will. Very high agility, but low health and attack in cat form)" << endl << "5 - Werewolf (Morphs into a huge beast at night, is a human during the day. In wolf form, very high attack, agility, and health during wolf form. However, you cannot use weapons or wear armor during the night." << endl << "==================================================================" << endl
	int killcount, x, y, z, health, magic, helm, chest, leggings, boots, quest, ehealth, ehelm, echest, eleggings, eboots, damage, primary, secondary, raceid;
	string enemy, questline, name, race, inv;
	while(1)
	{
		command();
	}
}
