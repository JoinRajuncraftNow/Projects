void up()
{
	
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
void boardout(int board[4][4])
{
	int x=0,y=0;
	while(y<4)
	{
		while(x<4)
		{	
			cout << board[x][y];
		}
		y++;
		x=0;
	}
}
