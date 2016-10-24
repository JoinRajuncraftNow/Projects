#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "conio.h"
using namespace std;
int gen(int d, int g) //Generates a random number between x and y.
{
	return rand()%(g-d+1)+d; //OUTPUTS ONLY 6!!! WTF
}
int main()
{
	int board[4][4];
	int x=0,y=0;
	//BOARD GENERATION
	while(y<4)
	{
		while(x<4)
		{	
			board[x][y]=0;
			if(gen(1,16)==1) //1\16 chance of getting a number other than 0.
			{
				if(gen(1,3)==1) //1\3 chance of 4
				{
					board[x][y]=4;
				}else{
					board[x][y]=2;
				}
			}
			x++;
		}
		y++;
		x=0;
	}
}
