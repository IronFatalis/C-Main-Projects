#pragma once
#include "Board.h"
#include "Player.h"

class Player;

class Game
{
public:
	Game();
	bool IsPlaying()const;
	bool IsTie() const;
	//frees memory occupied by Player objects
	void ClearPlayers();
	void SetPlayers();
	void DisplayInstructions() const;
	void NextPlayer();
	void AnnounceWinner() const;
	void Play();

private:
	static const int NUM_PLAYERS = 2;
	static const int FIRST = 0;
	static const int SECOND = 1;
	Board m_Board;
	//pointers to a base class
	Player* m_pPlayers[NUM_PLAYERS];
	int m_Current;
};

