//For misc. functions and stuff.
int gen(int x, int y) //Generates a random number between x and y.
{
	return rand()%(y-x+1)+x;
}
