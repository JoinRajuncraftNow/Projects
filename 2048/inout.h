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
