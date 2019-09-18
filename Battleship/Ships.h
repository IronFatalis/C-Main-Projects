#pragma once
#include <iostream>
#include <string>

using namespace std;

class Ships
{
public:
	string carrierColumnLetter, battleshipColumnLetter, cruiserColumnLetter, submarineColumnLetter, destroyerColumnLetter;
	int carrierColumn, battleshipColumn, cruiserColumn, submarineColumn, destroyerColumn;
	int carrierRow, battleshipRow, cruiserRow, submarineRow, destroyerRow;
	string carrierOri, battleshipOri, cruiserOri, submarineOri, destroyerOri;
	int carrierLocation, battleshipLocation, cruiserLocation, submarineLocation, destroyerLocation;
	void placeShips();
};

