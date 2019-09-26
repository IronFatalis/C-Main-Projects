#include "game.h"

#include <iostream>
using namespace std;

Game::Game() :
	m_Current(FIRST)
{}

bool Game::IsPlaying() const
{
	return (!m_Board.IsFull() && !m_Board.IsWinner(m_Players[FIRST].GetPiece()) && !m_Board.IsWinner(m_Players[SECOND].GetPiece()));
}

bool Game::IsTie() const
{
	return (m_Board.IsFull() && !m_Board.IsWinner(m_Players[FIRST].GetPiece()) && !m_Board.IsWinner(m_Players[SECOND].GetPiece()));
}

void Game::DisplayInstructions() const
{
	cout << "\tWelcome to the ultimate intellectual showdown: Tic - Tac - Toe.\n\n";
	cout << "Make your move by entering a number, 0 - 8.  The number\n";
	cout << "corresponds with board position, as illustrated:\n\n";
	cout << "\n\t" << "0 | 1 | 2";
	cout << "\n\t" << "---------";
	cout << "\n\t" << "3 | 4 | 5";
	cout << "\n\t" << "---------";
	cout << "\n\t" << "6 | 7 | 8";
	cout << "\n\nPrepare yourself. The battle is about to begin.\n\n";
}

void Game::NextPlayer()
{
	m_Current = (m_Current + 1) % NUM_PLAYERS;
}

void Game::AnnounceWinner() const
{
	cout << "The raging battle has come to a final end." << endl;

	if (IsTie())
	{
		cout << "Sadly, no player emerged victorious." << endl;
	}

	else
	{
		cout << "The winner of this climatic confrontation is Player ";
		if (m_Board.IsWinner(m_Players[FIRST].
			GetPiece()))
		{
			cout << m_Players[FIRST].GetPiece() << "!" << endl;
		}
		else
		{
			cout << m_Players[SECOND].GetPiece() << "!" << endl;
		}
	}
}

void Game::Play()
{
	m_Current = FIRST;
	m_Board.Reset();

	while (IsPlaying())
	{
		m_Board.Display();
		m_Players[m_Current].MakeMove(m_Board);
		NextPlayer();
	}
	m_Board.Display();
	AnnounceWinner();
}