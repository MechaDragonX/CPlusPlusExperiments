#include "RandomSelection.hpp"

using namespace std;

enum class Theme { HighScore, Upgrade, Teamwork, Discover, Character, Resources, Memory, Expansion, Risk };

int select();
void out(int);

int main()
{
	out(select());
	return 0;
}
int select()
{
	srand(time(NULL));
	int random = rand() % 8;
	return random;
}
void out(int random)
{
	cout << "The theme is ";
	switch (static_cast<Theme>(random))
	{
	case Theme::HighScore:
		cout << "\"High Score\"";
		break;
	case Theme::Upgrade:
		cout << "\"Upgrade\"";
		break;
	case Theme::Teamwork:
		cout << "\"Teamwork\"";
		break;
	case Theme::Discover:
		cout << "\"Discover\"";
		break;
	case Theme::Resources:
		cout << "\"Resources\"";
		break;
	case Theme::Memory:
		cout << "\"Memory\"";
		break;
	case Theme::Expansion:
		cout << "\"Expansion\"";
		break;
	case Theme::Risk:
		cout << "\"Risk\"";
		break;
	}
	cout << "!\nGood luck!\n";
}
