#ifndef ZACHLINUX
#define ZACHLINUX
using namespace std; //How the hell did I not see this?
#include <fstream>
#include <cstdlib>
#include <vector>
//Python must be compiled with readchar, or read -n must work
int key()
{
	static vector<int> reserve;
	ifstream i;
	i.open("c.txt");
	int u;
	if(reserve.size()==0)
	{
		system("python py.py;wait");
		while(!i.eof())
		{
			i >> u;
			reserve.push_back(u);
		}
	}
	u=reserve[0];
	reserve.erase(reserve.begin());
	i.close();
	ofstream o;
	o.open("c.txt",ios::trunc);
	int j=0;
	while(j != reserve.size())
	{
		o << reserve[j] << " ";
		j++;
	}
	o.close();
	if(reserve.size()==1)
		reserve.erase(reserve.begin());
	return u;
}
int getch() //Just in the case that Alex uses getch
{
	return key();
}
#endif
