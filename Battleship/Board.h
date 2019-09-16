#pragma once


class Board
{
public:
	const char MISS = 'X';
	const char HIT = 'H';
	const char EMPTY = 'O';

	const int NUM_SQUARES = 100;

	void emptyBoard();
};

