#include "PlayerComputer.h"
#include <iostream>
#include "Board.h"

using namespace std;

void PlayerComputer::MakeMove(Board& aBoard) const
{
	int move = 0;
	bool found = false;

	//if computer can will next move, make that move
	while (!found && move < aBoard.NUM_SQUARES)
	{
		if (aBoard.IsLegalMove(move))
		{
			//try move
			aBoard.ReceiveMove(GetPiece(), move);
			//test for winner
			found = aBoard.IsWinner(GetPiece());
			//undo move
			aBoard.ReceiveMove(aBoard.EMPTY, move);
		}
		if (!found)
		{
			move++;
		}
	}

	//otherwise if opponent can win next move
	if (!found)
	{
		move = 0;
		while (!found && move < aBoard.NUM_SQUARES)
		{
			if (aBoard.IsLegalMove(move))
			{
				//try move
				aBoard.ReceiveMove(GetOpponentPiece(), move);
				//test for winner
				found = aBoard.IsWinner(GetOpponentPiece());
				//undo move
				aBoard.ReceiveMove(aBoard.EMPTY, move);
			}
			if (!found)
			{
				move++;
			}
		}
	}
	//otherwise move to the best option
	if (!found)
	{
		move = 0;
		int i = 0;

		const int BEST_MOVES[] = { 4,0,2,6,8,1,3,5,7 };
		//pick best open square
		while (!found && i < aBoard.NUM_SQUARES)
		{
			move = BEST_MOVES[i];
			if (aBoard.IsLegalMove(move))
			{
				found = true;
			}
			i++;
		}
	}
	cout << "I, Player " << GetPiece() << ", shall take square number " << move << ".\n";
	aBoard.ReceiveMove(GetPiece(), move);
}
