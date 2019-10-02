#include "PlayerHuman.h"
#include <iostream>
#include "Board.h"

using namespace std;

//alow human to enter and make move
void PlayerHuman::MakeMove(Board& aBoard) const
{
	int move;

	do
	{
		cout << "Player " << GetPiece() << ", where would you like to move? (0-8): ";
		cin >> move;
	} while (!aBoard.IsLegalMove(move));
	aBoard.ReceiveMove(GetPiece(), move);
}
