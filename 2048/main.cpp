#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "windows.h"
#include "conio.h"
#include "inout.h"
#include "math.h"
int board[4][4];
using namespace std;
int gen(int d, int g) //Generates a random number between x and y.
{
	return rand()%(g-d+1)+d;
}
void newtile()
{
	int x=gen(0,3);
	int y=gen(0,3);
	if(board[x][y]==0)
	{
		if(gen(1,3)==1) //1\3 chance of 4
		{
			board[x][y]=4;
		}else{
			board[x][y]=2;
		}
	}else{
		int zero=0;
		x=0;
		y=0;
		while(y<4)
		{
			while(x<4)
			{	
				if(board[x][y]==0)
				{
					if(gen(1,3)==1) //1\3 chance of 4
					{
						board[x][y]=4;
					}else{
						board[x][y]=2;
					}
					return;
				}
				x++;
			}
			y++;
			x=0;
		}
		while(1){}
	}
}
int main()
{
	srand(time(NULL));
	int x=0,y=0;
	int x_=0,y_=0;
	while(x_<4)
	{
		y_=0;
		while(y_<4)
		{
			board[x][y]=0;
			y_++;
		}
		x_++;
	}
	//BOARD GENERATION
	newtile();
	newtile();
	boardout();
	while(1)
	{
		command();
		newtile();
		boardout();
	}
}
