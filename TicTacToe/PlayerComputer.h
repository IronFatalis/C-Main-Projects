#pragma once
#include "Player.h"

class Board;

class PlayerComputer : public Player
{
public:
	//caculates and makes the best move
	virtual void MakeMove(Board& aBoard) const;
};

