#include "Game.h"
#include "Board.h"
#include "Instructions.h"
#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

Board Board1 = Board();
Instructions Instructions1 = Instructions();

void Game::game()
{
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);
	Instructions1.instructions();
	Instructions1.playerAmount();

	if (Instructions1.players == 1)
	{
		//one player gmae
	}
	else if (Instructions1.players == 2)
	{
		//two player game
	}

	Board1.emptyBoard();
	Board1.shoot();
}
