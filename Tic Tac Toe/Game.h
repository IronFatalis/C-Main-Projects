#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Game
{
private:

public:
	const char EMPTY = ' ';
	const char TIE = 'T';
	const char NO_ONE = 'N';
	int game();
	char winner(const vector<char>* const pBoard);
	void announceWinner(char winner, char computer, char human);
	int askNumber(string question, int high, int low);
	bool isLegal(int move, const vector<char>* pBoard);
	int humanMove(const vector<char>* const pBoard, char human);
	int computerMove(vector<char> board, char computer);
};

