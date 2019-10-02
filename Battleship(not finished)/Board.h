#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Board
{
public:
	const char MISS = 'X';
	const char HIT = 'H';
	const char EMPTY = ' ';
	const int NUM_SQUARES = 200;
	string columnInput;
	bool answerCol, answerRow;
	int row, column, shot;
	void emptyBoard();
	int shoot();
};

