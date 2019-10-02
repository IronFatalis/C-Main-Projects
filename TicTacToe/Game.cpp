#include "Game.h"
#include<iostream>
#include "PlayerComputer.h"
#include "PlayerHuman.h"

using namespace std;

Game::Game() :
	m_Current(FIRST)
{
	//set pointers in m_pPlayers to NULL
	for (int i = 0; i < NUM_PLAYERS; i++)
	{
		m_pPlayers[i] = NULL;
	}
}

bool Game::IsPlaying() const
{
	return (!m_Board.IsFull() && !m_Board.IsWinner(m_pPlayers[FIRST]->GetPiece()) && !m_Board.IsWinner(m_pPlayers[SECOND]->GetPiece()));
}

bool Game::IsTie() const
{
	return (!m_Board.IsFull() && !m_Board.IsWinner(m_pPlayers[FIRST]->GetPiece()) && !m_Board.IsWinner(m_pPlayers[SECOND]->GetPiece()));
}

void Game::DisplayInstructions() const
{
	cout << "\tWelcome to the ultimate showdown: Tic-Tac-Toe.\n\nMake your move by entering a number, 0-8. The number\ncorresponds with board position, as illustrated:\n\n";
	cout << "\n\t0 | 1 | 2";
	cout << "\n\t---------";
	cout << "\n\t3 | 4 | 5";
	cout << "\n\t---------";
	cout << "\n\t6 | 7 | 8";
	cout << "\n\nPrepare yourself. The battle is about to begin.\n\n";
}

void Game::NextPlayer() 
{
	m_Current = (m_Current + 1) % NUM_PLAYERS;
}

void Game::AnnounceWinner() const
{
	cout << "The raging battle has come to a final end.\n";
	if (IsTie())
	{
		cout << "Sadly, no player emerged victoriois.\n";
	}
	else
	{
		cout << "The winner of thisclimatic confrontation is Player ";
		if (m_Board.IsWinner(m_pPlayers[FIRST]->GetPiece()))
		{
			cout << m_pPlayers[FIRST]->GetPiece() << "!\n";
		}
		else
		{
			cout << m_pPlayers[SECOND]->GetPiece() << "!\n";
		}
	}
}

//frees memory occupied by Player objects
void Game::ClearPlayers()
{
	for (int i = 0; i < NUM_PLAYERS; i++)
	{
		delete m_pPlayers[i];
		m_pPlayers[i] = NULL;
	}
}

//set human or computer players
void Game::SetPlayers()
{
	ClearPlayers();

	cout << "Who shall wage this epic fight? Declare the opponents..." << endl;

	for (int i = 0; i < NUM_PLAYERS; i++)
	{
		cout << "Player " << i + 1 << " - human or computer? (h/c): ";
		char playerType;
		cin >> playerType;

		if (playerType == 'h')
		{
			m_pPlayers[i] = new PlayerHuman();
		}
		else
		{
			m_pPlayers[i] = new PlayerComputer();
		}
	}
}

void Game::Play()
{
	m_Current = FIRST;
	m_Board.Reset();
	SetPlayers();
	system("CLS");

	while (IsPlaying())
	{
		m_Board.Display();
		m_pPlayers[m_Current]->MakeMove(m_Board);
		NextPlayer();
		system("CLS");
	}
	m_Board.Display();
	AnnounceWinner();
}