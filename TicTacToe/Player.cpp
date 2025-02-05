#include "Player.h"
#include <iostream>
#include "Board.h"

using namespace std;

const char Player::PIECES[NUM_PIECES] = { 'X', 'O' };
int Player::current = 0;

Player::Player()
{
	m_Piece = PIECES[current];
	current = (current + 1) % NUM_PIECES;
}

Player::~Player()
{}

char Player::GetOpponentPiece() const
{
	char piece;

	if (m_Piece == PIECES[FIRST])
	{
		piece = PIECES[SECOND];
	}
	else
	{
		piece = PIECES[FIRST];
	}
	return piece;
}

void Player::MakeMove(Board& aBoard) const
{
	int move;

	do
	{
		cout << "Player " << GetPiece() << ", where would you like to move? (0-8): ";
		cin >> move;
	} while (!aBoard.IsLegalMove(move));
	aBoard.ReceiveMove(GetPiece(), move);
}

char Player::GetPiece() const
{
	return m_Piece;
}