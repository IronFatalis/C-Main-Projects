#pragma once

class Player
{
public:
	Player();
	char GetPiece() const;
	void MakeMove(Board& aBoard) const;

private:
	static const int NUM_PIECES = 2;
	static const char PIECES[NUM_PIECES];
	static int current;
	char m_Piece;
};

