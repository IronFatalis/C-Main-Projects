#include "Instructions.h"
#include <iostream>

using namespace std;

void Instructions::instructions()
{
	cout << "This is how you play the game!" << endl;
}

int Instructions::playerAmount()
{
	do
	{
		cout << "How many human players (1 or 2) will be playing?" << endl;
		cin >> players;
		if (players == 1 || players == 2)
		{
			wrongPlayers = false;
			system("CLS");
			return players;
		}
		else
		{
			cout << "Please pick 1 or 2 players" << endl;
			wrongPlayers = true;
		}
	} while (wrongPlayers == true);
}