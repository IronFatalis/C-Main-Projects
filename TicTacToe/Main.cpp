#include<iostream>
#include "Game.h"

using namespace std;

int main()
{
	Game ticTacToe;

	ticTacToe.DisplayInstructions();

	char again;

	do
	{
		ticTacToe.Play();
		cout << "\nPlay again? (y/n): ";
		cin >> again;
	} while (again != 'n');
	return 0;
}