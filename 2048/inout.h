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
	int x=0,y=0,loop;
	while(y<4)
	{
		while(x<4)
		{	
			if(board[x][y]==0)
			{
				loop=0;
			}
			x++;
		}
		cout << endl;
		y++;
		x=0;
	}
}
void down()
{
	
}
void left()
{
	
}
void right()
{
	
}
void command()
{
	char c;
	switch(c=(char)getch())
	{
	case 'w':
	case 'W':
		up();    //key up (W)
		break;
	case 's':
	case 'S':
		down();   // key down (S)
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
	int x=0,y=0;
	while(y<4)
	{
		while(x<4)
		{	
			cout << board[x][y];
			x++;
		}
		cout << endl;
		y++;
		x=0;
	}
}
