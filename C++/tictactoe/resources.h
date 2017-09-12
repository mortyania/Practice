#pragma once
#include <iostream>
#include <string>

std::string TicTacToe[3][3]
{
	{ "1","2","3" },
	{ "4","5","6" },
	{ "7","8","9" }
};

bool checker[9] { 1,1,1,1,1,1,1,1,1 };

void print()
{
	std::cout << "[" << TicTacToe[0][0] << "] [" << TicTacToe[0][1] << "] [" << TicTacToe[0][2] << "]" << std::endl;
	std::cout << "[" << TicTacToe[1][0] << "] [" << TicTacToe[1][1] << "] [" << TicTacToe[1][2] << "]" << std::endl;
	std::cout << "[" << TicTacToe[2][0] << "] [" << TicTacToe[2][1] << "] [" << TicTacToe[2][2] << "]" << std::endl;
};

void playerOne(int choice)
{
	int check = choice - 1;
	bool turnOver = 0;
	while (!turnOver)
	{
		if (checker[check])
		{
			switch (choice)
			{
			case 1:
				TicTacToe[0][0] = "X";
				checker[0] = 0;
				turnOver = 1;
				break;
			case 2:
				TicTacToe[0][1] = "X";
				checker[1] = 0;
				turnOver = 1;
				break;
			case 3:
				TicTacToe[0][2] = "X";
				checker[2] = 0;
				turnOver = 1;
				break;
			case 4:
				TicTacToe[1][0] = "X";
				checker[3] = 0;
				turnOver = 1;
				break;
			case 5:
				TicTacToe[1][1] = "X";
				checker[4] = 0;
				turnOver = 1;
				break;
			case 6:
				TicTacToe[1][2] = "X";
				checker[5] = 0;
				turnOver = 1;
				break;
			case 7:
				TicTacToe[2][0] = "X";
				checker[6] = 0;
				turnOver = 1;
				break;
			case 8:
				TicTacToe[2][1] = "X";
				checker[7] = 0;
				turnOver = 1;
				break;
			case 9:
				TicTacToe[2][2] = "X";
				checker[8] = 0;
				turnOver = 1;
				break;
			}
		}
		else
		{
			std::cout << "Square already taken, choose again!" << std::endl;
			std::cin >> choice;
			check = choice - 1;
		}
	}
};

void playerTwo(int playerturn)
{
	int compchoice = rand() % 9;
	bool turnOver = 0;
	while (!turnOver)
	{
		if (checker[compchoice])
		{
			switch (compchoice)
			{
			case 0:
				TicTacToe[0][0] = "O";
				checker[0] = 0;
				turnOver = 1;
				break;
			case 1:
				TicTacToe[0][1] = "O";
				checker[1] = 0;
				turnOver = 1;
				break;
			case 2:
				TicTacToe[0][2] = "O";
				checker[2] = 0;
				turnOver = 1;
				break;
			case 3:
				TicTacToe[1][0] = "O";
				checker[3] = 0;
				turnOver = 1;
				break;
			case 4:
				TicTacToe[1][1] = "O";
				checker[4] = 0;
				turnOver = 1;
				break;
			case 5:
				TicTacToe[1][2] = "O";
				checker[5] = 0;
				turnOver = 1;
				break;
			case 6:
				TicTacToe[2][0] = "O";
				checker[6] = 0;
				turnOver = 1;
				break;
			case 7:
				TicTacToe[2][1] = "O";
				checker[7] = 0;
				turnOver = 1;
				break;
			case 8:
				TicTacToe[2][2] = "O";
				checker[8] = 0;
				turnOver = 1;
				break;
			}
		}
		else
		{
			compchoice = rand() % 9;
		}
	}
};

bool wincheck(bool win)
{
	if (((TicTacToe[0][0]=="X")&&(TicTacToe[0][1]=="X")&&(TicTacToe[0][2]=="X"))
		|| ((TicTacToe[0][0] == "O") && (TicTacToe[0][1] == "O") && (TicTacToe[0][2] == "O")))
	{
		win = 1;
		std::cout << "We have a winner!!" << std::endl;
	}
	else if (((TicTacToe[1][0] == "X") && (TicTacToe[1][1] == "X") && (TicTacToe[1][2] == "X"))
		|| ((TicTacToe[1][0] == "O") && (TicTacToe[1][1] == "O") && (TicTacToe[1][2] == "O")))
	{
		win = 1;
		std::cout << "We have a winner!!" << std::endl;
	}
	else if (((TicTacToe[2][0] == "X") && (TicTacToe[2][1] == "X") && (TicTacToe[2][2] == "X"))
		|| ((TicTacToe[2][0] == "O") && (TicTacToe[2][1] == "O") && (TicTacToe[2][2] == "O")))
	{
		win = 1;
		std::cout << "We have a winner!!" << std::endl;
	}
	if (((TicTacToe[0][0] == "X") && (TicTacToe[1][0] == "X") && (TicTacToe[2][0] == "X"))
		|| ((TicTacToe[0][0] == "O") && (TicTacToe[1][0] == "O") && (TicTacToe[2][0] == "O")))
	{
		win = 1;
		std::cout << "We have a winner!!" << std::endl;
	}
	else if (((TicTacToe[0][1] == "X") && (TicTacToe[1][1] == "X") && (TicTacToe[2][1] == "X"))
		|| ((TicTacToe[0][1] == "O") && (TicTacToe[1][1] == "O") && (TicTacToe[2][1] == "O")))
	{
		win = 1;
		std::cout << "We have a winner!!" << std::endl;
	}
	else if (((TicTacToe[0][2] == "X") && (TicTacToe[1][2] == "X") && (TicTacToe[2][2] == "X"))
		|| ((TicTacToe[0][2] == "O") && (TicTacToe[1][2] == "O") && (TicTacToe[2][2] == "O")))
	{
		win = 1;
		std::cout << "We have a winner!!" << std::endl;
	}
	else if (((TicTacToe[0][0] == "X") && (TicTacToe[1][1] == "X") && (TicTacToe[2][2] == "X"))
		|| ((TicTacToe[0][0] == "O") && (TicTacToe[1][1] == "O") && (TicTacToe[2][2] == "O")))
	{
		win = 1;
		std::cout << "We have a winner!!" << std::endl;
	}
	else if (((TicTacToe[0][2] == "X") && (TicTacToe[1][1] == "X") && (TicTacToe[2][0] == "X"))
		|| ((TicTacToe[0][2] == "O") && (TicTacToe[1][1] == "O") && (TicTacToe[2][0] == "O")))
	{
		win = 1;
		std::cout << "We have a winner!!" << std::endl;
	}

	return win;
}