#include "Board.h"
#include "Instructions.h"
#include "Game.h"
#include <iostream>
#include <vector>

using namespace std;

char Board::askYesNo(string question)
{
	char response;
	do
	{
		cout << question << " (y/n): ";
		cin >> response;
	} while (response != 'y' && response != 'n');

	return response;
}

char Board::humanPiece()
{
	char go_first = askYesNo("Do you require the first move?");
	if (go_first == 'y')
	{
		cout << "\nThen take the first move.  You will need it.\n";
		return X;
	}
	else
	{
		cout << "\nYour bravery will be your undoing... I will go first.\n";
		return O;
	}
}

char Board::opponent(char piece)
{
	if (piece == X)
	{
		return O;
	}
	else
	{
		return X;
	}
}

void Board::displayBoard(const vector<char>* const pBoard)
{
	cout << "\n\t" << (*pBoard)[0] << " | " << (*pBoard)[1] << " | " << (*pBoard)[2];
	cout << "\n\t" << "---------";
	cout << "\n\t" << (*pBoard)[3] << " | " << (*pBoard)[4] << " | " << (*pBoard)[5];
	cout << "\n\t" << "---------";
	cout << "\n\t" << (*pBoard)[6] << " | " << (*pBoard)[7] << " | " << (*pBoard)[8];
	cout << "\n\n";
}