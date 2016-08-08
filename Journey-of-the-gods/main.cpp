#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include "Combat.h"
#include "Quests.h"
#include "Player.h"
#include "Misc.h"
#define KEY_SPECIAL 224
#define KEY_UP 119
#define KEY_DOWN 115
#define KEY_LEFT 97
#define KEY_RIGHT 100
#define KEY_R 114
#define KEY_F 102
#define KEY_Q 113
#define KEY_E 101
int killcount, x, y, z, health, magic, helm, chest, leggings, boots, quest, enemyid, ehealth, ehelm, echest, eleggings, eboots, damage, primary, secondary, raceid;
int map[100][100][5];
string enemy, questline, name, race, inv; //I hope this works.
//Define and add other keys for commands.
using namespace std;
void command()
{
	int c=0;
	switch(c=getch())
	{
	case KEY_SPECIAL:
		command();
		break;
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
	case KEY_R:
		r();    //key R
		break;
	case KEY_F:
		f();   // key F
		break;
	case KEY_Q:
		q();  // key Q
		break;
	case KEY_E:
		e();  // key E
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
enemyid-ID of enemy.
name- Name of player
race- Race of player. (HINT: Use in dialog!)
inv- Inventory of player.
magic- Magic level of the player.
*/
int main()
{
	cout << endl << "What is your name? ";
	getline(cin, name);
	int racevar=0;
	while(racevar==0)
	{
		cout << "Hello, " << name << " What race will you be?" << endl << "==================================================================" << endl << "1 - Human (Medium strength, agility, and health.)" << endl << "2 - Elf (Higher strength, agility, and health. Although, elves cannot use potions to heal themselves. They must use magic.)" << endl << "3 - Orc (Very high strength and health, but very low agility.)" << endl << "4 - Dwarf (An ancient miner from a lost race. Low agility, but high attack and defense. You gain a buff over enemies in the dark due to your inherit night vision and keen senses.)" << endl << "5 - Werewolf (Morphs into a huge beast at night, is a human during the day. In wolf form, very high attack, agility, and health during wolf form. However, you cannot use weapons or wear armor during the night.)" << endl << "==================================================================" << endl;
		cin >> raceid;
		switch(raceid)
		{
		case 1:
			race="Human"; //I was just testing how much you were paying attention. Totally didn't forget the " or anything.
			racevar=1;
			break;
		case 2:
			race="Elf";
			racevar=1;
			break;
		case 3:
			race="Orc";
			racevar=1;
			break;
		case 4:
			race="Dwarf";
			racevar=1;
			break;
		case 5:
			race="Werecat";
			racevar=1;
			break;
		default:
			cout << endl << "Unknown race. Please only input 1-5" << endl;  // not valid
			break;
		}
	}
	while(1)
	{
		command();
	}
	return -1;
}
