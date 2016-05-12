#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include "Combat.h"
#include "Quests.h"
#include "Player.h"
#define KEY_UP 119
#define KEY_DOWN 115
#define KEY_LEFT 97
#define KEY_RIGHT 100
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
int main()
{
	int killcount, x, y, z, health, helm, chest, leggings, boots, quest, primary, secondary;
	string enemy, questline, name, race, inv;
	while(1)
	{
		command();
	}
}
