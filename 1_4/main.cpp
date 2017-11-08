#include <iostream>
#include <conio.h>

char toUpper (char c)
{
	c-=32;
	return c;
}
char toLower (char c)
{
	c+=32;
	return c;
}
int main()
{
	using namespace std;
	char key =0;
	while (key != 27)
	{
		system("cls");
		cout << "Please, type any letter in upper or lower case, or press ESC for exit." << endl;
		key = getch();
		cout << endl;
		if (key > 96 && key < 123)
		{
			key = toUpper(key);
			cout << "Your letter in upper case is: " << key << endl;
			getch();
		}
			else if (key > 64 && key < 91)
		{
			key = toLower(key);
			cout << "Your letter in lower case is: " << key << endl;
			getch();
		}
		else if (key == 27)
		{
			break;
		}
		else
		{
			cout << "The symbol you typed is not a letter! Please, try again." << endl;
			getch();
		}
	}
	return 0;
}