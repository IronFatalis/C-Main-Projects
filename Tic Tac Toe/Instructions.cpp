#include "Instructions.h"
#include <iostream>

using namespace std;

void Instructions::instructions()
{
	cout << "Welcome to the ultimate man-machine showdown: Tic-Tac-Toe.\n";
	cout << "--where human brain is pit against silicon processor\n\n";

	cout << "Make your move known by entering a number, 0 - 8.  The number\n";
	cout << "corresponds to the desired board position, as illustrated:\n\n";

	cout << "       0 | 1 | 2\n";
	cout << "       ---------\n";
	cout << "       3 | 4 | 5\n";
	cout << "       ---------\n";
	cout << "       6 | 7 | 8\n\n";

	cout << "Prepare yourself, human.  The battle is about to begin.\n\n";
}