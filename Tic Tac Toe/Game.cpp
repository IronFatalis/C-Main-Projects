#include "Game.h"
#include "Instructions.h"
#include "Board.h"
#include <iostream>
#include <vector>

using namespace std;

Board board1 = Board();

int Game::game()
{
	int move;
	const int NUM_SQUARES = 9;
	vector<char> board(NUM_SQUARES, EMPTY);

	Instructions();
	char human = board1.humanPiece();
	char computer = board1.opponent(human);
	char turn = board1.X;
	board1.displayBoard(&board);

	while (winner(&board) == NO_ONE)
	{
		if (turn == human)
		{
			move = humanMove(&board, human);
			board[move] = human;
		}
		else
		{
			move = computerMove(board, computer);
			board[move] = computer;
		}
		board1.displayBoard(&board);
		turn = board1.opponent(turn);
	}

	announceWinner(winner(&board), computer, human);
}

char Game::winner(const vector<char>* const pBoard)
{
	// all possible winning rows
	const int WINNING_ROWS[8][3] = { {0, 1, 2},
									 {3, 4, 5},
									 {6, 7, 8},
									 {0, 3, 6},
									 {1, 4, 7},
									 {2, 5, 8},
									 {0, 4, 8},
									 {2, 4, 6} };
	const int TOTAL_ROWS = 8;

	// if any winning row has three values that are the same (and not EMPTY),
	// then we have a winner
	for (int row = 0; row < TOTAL_ROWS; ++row)
	{
		if (((*pBoard)[WINNING_ROWS[row][0]] != EMPTY) &&
			((*pBoard)[WINNING_ROWS[row][0]] == (*pBoard)[WINNING_ROWS[row][1]]) &&
			((*pBoard)[WINNING_ROWS[row][1]] == (*pBoard)[WINNING_ROWS[row][2]]))
		{
			return (*pBoard)[WINNING_ROWS[row][0]];
		}
	}

	// since nobody has won, check for a tie (no empty squares left)
	if (count(pBoard->begin(), pBoard->end(), EMPTY) == 0)
		return TIE;

	// since nobody has won and it isn't a tie, the game ain't over
	return NO_ONE;
}

void Game::announceWinner(char winner, char computer, char human)
{
	if (winner == computer)
	{
		cout << winner << "'s won!\n";
		cout << "As I predicted, human, I am triumphant once more -- proof\n";
		cout << "that computers are superior to humans in all regards.\n";
	}

	else if (winner == human)
	{
		cout << winner << "'s won!\n";
		cout << "No, no!  It cannot be!  Somehow you tricked me, human.\n";
		cout << "But never again!  I, the computer, so swear it!\n";
	}

	else
	{
		cout << "It's a tie.\n";
		cout << "You were most lucky, human, and somehow managed to tie me.\n";
		cout << "Celebrate... for this is the best you will ever achieve.\n";
	}
}

int Game::askNumber(string question, int high, int low)
{
	int number;
	do
	{
		cout << question << " (" << low << " - " << high << "): ";
		cin >> number;
	} while (number > high || number < low);

	return number;
}

inline bool Game::isLegal(int move, const vector<char>* pBoard)
{
	return ((*pBoard)[move] == EMPTY);
}

int Game::humanMove(const vector<char>* const pBoard, char human)
{
	int move = askNumber("Where will you move?", (pBoard->size() - 1));
	while (!isLegal(move, pBoard))
	{
		cout << "\nThat square is already occupied, foolish human.\n";
		move = askNumber("Where will you move?", (pBoard->size() - 1));
	}
	cout << "Fine...\n";
	return move;
}

int Game::computerMove(vector<char> board, char computer)
{
	unsigned int move = 0;
	bool found = false;

	//if computer can win on next move, that’s the move to make
	while (!found && move < board.size())
	{
		if (isLegal(move, &board))
		{
			//try move
			board[move] = computer;
			//test for winner
			found = winner(&board) == computer;
			//undo move
			board[move] = EMPTY;
		}

		if (!found)
		{
			++move;
		}
	}

	//otherwise, if opponent can win on next move, that's the move to make
	if (!found)
	{
		move = 0;
		char human = board1.opponent(computer);

		while (!found && move < board.size())
		{
			if (isLegal(move, &board))
			{
				//try move
				board[move] = human;
				//test for winner
				found = winner(&board) == human;
				//undo move
				board[move] = EMPTY;
			}

			if (!found)
			{
				++move;
			}
		}
	}

	//otherwise, moving to the best open square is the move to make
	if (!found)
	{
		move = 0;
		unsigned int i = 0;

		const int BEST_MOVES[] = { 4, 0, 2, 6, 8, 1, 3, 5, 7 };
		//pick best open square
		while (!found && i < board.size())
		{
			move = BEST_MOVES[i];
			if (isLegal(move, &board))
			{
				found = true;
			}

			++i;
		}
	}

	cout << "I shall take square number " << move << endl;
	return move;
}
