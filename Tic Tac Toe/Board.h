#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Board
{
public:
	const char X = 'X';
	const char O = 'O';
	char askYesNo(string question);
	char humanPiece();
	char opponent(char piece);
	void displayBoard(const vector<char>* const pBoard);
};

