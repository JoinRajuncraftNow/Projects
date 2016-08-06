using namespace std; //For misc. functions and stuff.
int gen(int x, int y) //Generates a random number between x and y.
{
	return rand()%(y-x+1)+x;
}

//MAP FUNCTIONS
int mapgen()
{
	cout << "Generating Map..." << endl; //Randomly generates map.
	while(x<100)
	{
		while(y<100)
		{
			while(z<5)
			{
				map[x][y][z]=gen(1,10);
				z++;
			}
			y++;
			z=0;
		}
		x++;
		y=0;
	}
	map[99][99][0]=11;
	x=0; //y is already 0!
	z=4;
}
extern int x;
extern int y;
extern int z;
extern int map[100][100][5];
