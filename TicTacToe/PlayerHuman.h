#pragma once
#include "Player.h"

class Board;

class PlayerHuman : public Player
{
public:
	//allow human to enter and make move
	virtual void MakeMove(Board& aBoard) const;
};

