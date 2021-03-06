using namespace std;
extern int board[4][4];
void clear() {
    COORD topLeft  = { 0, 0 };
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen;
    DWORD written;

    GetConsoleScreenBufferInfo(console, &screen);
    FillConsoleOutputCharacterA(
        console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    FillConsoleOutputAttribute(
        console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
        screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    SetConsoleCursorPosition(console, topLeft);
}
void up()
{
	int x=0,y=0,loop=0, yy=0;
	while(x<4)
	{
		while(y<4)
		{	
			if(board[x][y]!=0)
			{
				yy=y;
				while(yy>0)
				{
					if(board[x][yy-1]==0&&yy!=0)
					{
						board[x][yy-1]=board[x][yy];
						board[x][yy]=0;
					}else if(board[x][yy-1]==board[x][yy]){
						board[x][yy-1]=board[x][yy]*2;
						board[x][yy]=0;
					}else{
						break;
					}
					yy--;
				}
			}
			y++;
		}
		cout << endl;
		x++;
		y=0;
	}
}
void down()
{
	int x=0,y=3,loop=0, yy=0;
	while(x<4)
	{
		while(y>-1)
		{	
			if(board[x][y]!=0)
			{
				yy=y;
				while(yy<3)
				{
					if(board[x][yy+1]==0&&yy!=3)
					{
						board[x][yy+1]=board[x][yy];
						board[x][yy]=0;
					}else if(board[x][yy+1]==board[x][yy]){
						board[x][yy+1]=board[x][yy]*2;
						board[x][yy]=0;
					}else{
						break;
					}
					yy++;
				}
			}
			y--;
		}
		cout << endl;
		x++;
		y=3;
	}
}
void left()
{
	int x=0,y=0,loop=0, xx=0;
	while(y<4)
	{
		while(x<4)
		{	
			if(board[x][y]!=0)
			{
				xx=x;
				while(xx>0)
				{
					if(board[xx-1][y]==0&&xx!=0)
					{
						board[xx-1][y]=board[xx][y];
						board[xx][y]=0;
					}else if(board[xx-1][y]==board[xx][y]){
						board[xx-1][y]=board[xx][y]*2;
						board[xx][y]=0;
					}else{
						break;
					}
					xx--;
				}
			}
			x++;
		}
		cout << endl;
		y++;
		x=0;
	}
}
void right()
{
	int x=3,y=0,loop=0, xx=0;
	while(y<4)
	{
		while(x>-1)
		{	
			if(board[x][y]!=0)
			{
				xx=x;
				while(xx<3)
				{
					if(board[xx+1][y]==0&&xx!=3)
					{
						board[xx+1][y]=board[xx][y];
						board[xx][y]=0;
					}else if(board[xx+1][y]==board[xx][y]){
						board[xx+1][y]=board[xx][y]*2;
						board[xx][y]=0;
					}else{
						break;
					}
					xx++;
				}
			}
			x--;
		}
		cout << endl;
		y++;
		x=3;
	}
}
void command()
{
	char c;
	switch(c=(char)getch())
	{
	case 'w':
	case 'W':
		up();    //key up (W)
		up();
		break;
	case 's':
	case 'S':
		down();   // key down (S)
		down();  
		break;
	case 'a':
	case 'A':
		left();  // key left (A)
		break;
	case 'd':
	case 'D':
		right();  // key right (D)
		break;
	default:
		cout << endl << "Unknown Command." << endl;  // not valid
		break;
	}
}
void boardout()
{
	clear();
	int x=0,y=0, divide;
	while(y<4)
	{
		while(x<4)
		{	
			divide=board[x][y]/10;
			if(divide < 10)
			{
				cout << "   " << board[x][y] << "   ";
			}else if(divide > 10){
				cout << "   " << board[x][y] << "  ";
			}else if(divide > 100){
				cout << "  " << board[x][y] << "  ";
			}else if(divide > 1000){
				cout << "  " << board[x][y] << " ";
			}else if(divide > 10000){
				cout << "  " << board[x][y] << "  ";
			}else if(divide > 100000){
				cout << " " << board[x][y] << " ";
			}
			x++;
		}
		cout << endl << endl;
		y++;
		x=0;
	}
}