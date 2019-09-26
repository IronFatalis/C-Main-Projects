#pragma once
#include "board.h"
#include "player.h"

class Game
{
public:
	Game();
	bool IsPlaying() const;
	bool IsTie() const;
	void DisplayInstructions() const;
	void NextPlayer();
	void AnnounceWinner() const;
	void Play();

private:
	static const int NUM_PLAYERS = 2;
	static const int FIRST = 0;
	static const int SECOND = 1;

	Board m_Board;
	Player m_Players[NUM_PLAYERS];
	int m_Current;
};