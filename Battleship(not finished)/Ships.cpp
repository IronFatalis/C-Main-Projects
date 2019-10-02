#include "Ships.h"
#include <iostream>

using namespace std;

void Ships::placeShips()
{
	cout << "What column would you like to place your 'Carrier' (5 long)?: ";
	cin >> carrierColumnLetter;
	if (carrierColumnLetter == "A")
	{
		carrierColumn = -1;
	}
	else if (carrierColumnLetter == "B")
	{
		carrierColumn = 9;
	}
	else if (carrierColumnLetter == "C")
	{
		carrierColumn = 19;
	}
	else if (carrierColumnLetter == "D")
	{
		carrierColumn = 29;
	}
	else if (carrierColumnLetter == "E")
	{
		carrierColumn = 39;
	}
	else if (carrierColumnLetter == "F")
	{
		carrierColumn = 49;
	}
	else if (carrierColumnLetter == "G")
	{
		carrierColumn = 59;
	}
	else if (carrierColumnLetter == "H")
	{
		carrierColumn = 69;
	}
	else if (carrierColumnLetter == "I")
	{
		carrierColumn = 79;
	}
	else if (carrierColumnLetter == "J")
	{
		carrierColumn = 89;
	}
	else
	{
		cout << "Please enter a colunm from A-J: ";
	}

	cout << "What row would you like to place your 'Carrier' (5 long)?: ";
	cin >> carrierRow;
	if (carrierRow < 1 || carrierRow > 10)
	{
		cout << "Please select a row between 1-10: ";
	}
	else
	{

	}

	cout << "Would you like your 'Carrier' (5 long) horizontal or vertical from this point? H/V: ";
	cin >> carrierOri;
	if (carrierOri == "H")
	{
		//set end location
		if (carrierColumn > 5 && carrierColumn < 10 || carrierColumn > 15 && carrierColumn < 20 || carrierColumn > 25 && carrierColumn < 30 || carrierColumn > 35 && carrierColumn < 40 || carrierColumn > 45 && carrierColumn < 50 || carrierColumn > 55 && carrierColumn < 60 || carrierColumn > 65 && carrierColumn < 70 || carrierColumn > 75 && carrierColumn < 80 || carrierColumn > 85 && carrierColumn < 90 || carrierColumn > 95 && carrierColumn < 100)
		{

		}
	}
	else if (carrierOri == "V")
	{
		//set end location
	}
	else
	{
		cout << "Please select either 'H' for horizontal or 'V' for vertical: ";
	}




	cout << "What column would you like to place your 'Battleship' (4 long)?: ";
	cin >> battleshipColumnLetter;
	cout << "What row would you like to place your 'Battleship' (4 long)?: ";
	cin >> battleshipRow;
	cout << "Would you like your 'Battleship' (4 long) horizontal or vertical from this point? H/V: ";
	cin >> battleshipOri;
	cout << "What column would you like to place your 'Cruiser' (3 long)?: ";
	cin >> cruiserColumnLetter;
	cout << "What row would you like to place your 'Cruiser' (3 long)?: ";
	cin >> cruiserRow;
	cout << "Would you like your 'Cruiser' (3 long) horizontal or vertical from this point? H/V: ";
	cin >> cruiserOri;
	cout << "What column would you like to place your 'Submarine' (3 long)?: ";
	cin >> submarineColumnLetter;
	cout << "What row would you like to place your 'Submarine' (3 long)?: ";
	cin >> submarineRow;
	cout << "Would you like your 'Submarine' (3 long) horizontal or vertical from this point? H/V: ";
	cin >> submarineOri;
	cout << "What column would you like to place your 'Destroyer' (2 long)?: ";
	cin >> destroyerColumnLetter;
	cout << "What row would you like to place your Destroyer' (2 long)?: ";
	cin >> destroyerRow;
	cout << "Would you like your 'Destroyer' (2 long) horizontal or vertical from this point? H/V: ";
	cin >> destroyerOri;
}
/*
Carrier, with five holes
Battleship, with four holes
Cruiser, with three holes
Submarine, with three holes
Destroyer, with two holes
*/