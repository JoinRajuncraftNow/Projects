using namespace std; //This might fix it
#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
#include <ctime>
#include "conio.h"
#include "Combat.h"
#include "Quests.h"
#include "Player.h"
#include "Misc.h"
int killcount, x, y, z, health, magic, helm, chest, leggings, boots, quest, enemyid, ehealth, ehelm, echest, eleggings, eboots, damage, primary, secondary, raceid;
int map[200][200][3];
string enemy, questline, name, race, inv; //I hope this works.
//Define and add other keys for commands.
//time_t t = time(0); I think this is time, is it?
void q() {}
//Do that if the code has nothing in it
void e() {}
void command()
{
	char c;
	switch(c=(char)getch())
	{
	case 'w':
		forward();    //key up (W)
		break;
	case 's':
		backward();   // key down (S)
		break;
	case 'a':
		left();  // key left (A)
		break;
	case 'd':
		right();  // key right (D)
		break;
	case 'r':
		up();    //key R
		break;
	case 'f':
		down();   // key F
		break;
	case 'q':
		q();  // key Q
		break;
	case 'e':
		e();  // key E
		break;
	default:
		cout << endl << "Unknown Command. Type 'H' for help, which is unavailable currently." << endl;  // not valid
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
	int racevar=0; //Don't think you need that...
	while(racevar==0)
	{
		cout << "Hello, " << name << "! What race will you be?" << endl << "==================================================================" << endl << "1 - Human (Medium strength, agility, and health.)" << endl << "2 - Elf (Higher strength, agility, and health. Although, elves cannot use potions to heal themselves. They must use magic.)" << endl << "3 - Orc (Very high strength and health, but very low agility.)" << endl << "4 - Dwarf (An ancient miner from a lost race. Low agility, but high attack and defense. You gain a buff over enemies in the dark due to your inherit night vision and keen senses.)" << endl << "5 - Werewolf (Morphs into a huge beast at night, is a human during the day. In wolf form, very high attack, agility, and health during wolf form. However, you cannot use weapons or wear armor during the night.)" << endl << "==================================================================" << endl;
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
			race="Werewolf";
			racevar=1;
			break;
		default:
			cout << endl << "Unknown race. Please only input 1-5" << endl;  // not valid
			break;
		}
	}
	cout << endl << "[You chose " << race << "]" << endl;
	mapgen();
	while(1)
	{
		command();
	}
	return 0;
}
