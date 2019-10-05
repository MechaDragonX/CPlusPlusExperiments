#include "FileMagic.hpp"

using namespace std;

void write();
void read();

int main()
{
	write();
	read();
	return 0;
}
void write()
{
	ofstream File("..\data\text.txt");
	if(File.is_open())
	{
		for(int i = 0; i < 100; i++)
		{
			File << "There world is full of letters!\nThe mushrooms are bouncy.\nSatan is always watching!\n\n";
		}
		File.close();
	}
	else cout << "Unable to open file\n";
}
void read()
{
	ifstream File("..\data\bee_movie_script.txt");
	string line;
	if(File.is_open())
	{
		while(getline(File, line))
		{
			cout << line << '\n';
		}
		File.close();
	}
	else cout << "Unable to open file\n";
}