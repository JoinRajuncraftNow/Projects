#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "conio.h"
#include "inout.h"
#include "math.h"
int board[4][4];
using namespace std;
int gen(int d, int g) //Generates a random number between x and y.
{
	return rand()%(g-d+1)+d;
}
int main()
{
	srand(time(NULL));
	int x=0,y=0;
	//BOARD GENERATION
	while(y<4)
	{
		while(x<4)
		{	
			board[x][y]=0;
			if(gen(1,24)==1) //1\16 chance of getting a number other than 0.
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
	for(int i=0; i<1; i++)
	{
		x=gen(0,3);
		y=gen(0,3);
		if(gen(1,3)==1) //1\3 chance of 4
		{
			board[x][y]=4;
		}else{
			board[x][y]=2;
		}
	}
	while(1)
	{
		boardout();
		return 0;
	}
}
