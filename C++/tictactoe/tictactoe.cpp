#include <iostream>
#include <string>
#include "resources.h"

using namespace std;

int main()
{
	int choice;
	bool win = 0;
	cout << "Welcome to TicTacToe!" << endl << endl;
	print();

	cout << endl << "Choose first your move" << endl;
	cin >> choice;
	srand(choice);

	if (choice < 1 || choice > 9)
	{
		cout << endl << "Please choose an empty square from 1 to 9" << endl;
		cin >> choice;
	}
	playerOne(choice);
	print();
	cout << endl;

	for (int i = 2; i < 10; i++)
	{
		win = wincheck(win);
		if (win)
		{
			goto end;
		}

	if (i % 2 == 0)
		{
			cout << "Computers turn:" << endl;
			playerTwo(choice);
			print();
		}
		else 
		{
			cout << "Choose your move" << endl;
			cin >> choice;

			if (choice < 1 || choice > 9)
			{
				cout << endl << "Please choose an empty square from 1 to 9" << endl;
				cin >> choice;
			}
			playerOne(choice);
			print();
		}
		cout << endl;
	}
	if (!win)
	{
		cout << "Nobody won" << endl;
	}
	end:
		//system("pause");

	return 0;
}