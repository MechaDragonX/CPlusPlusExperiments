#include "UserInput.hpp"
#include <string>

using namespace std;

int main()
{
	string input;
	cout << "Type a word: ";
	cin >> input;
	for(int i = 0; i < input.length(); i++)
	{
		if(input[i] == 'a' || input[i] == 'A')
		{
			cout << input << " has an 'a'!";
			break;
		}
	}

	return 0;
}
