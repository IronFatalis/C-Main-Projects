#include <iostream>
#include <string>

using namespace std;

int main()
{
	char row = 'A';
	char Guess[5];
	bool rowCorrect = false;
	bool colCorrect = false;
	int hit = 2;
	bool game = true;

	do
	{
		cout << "Make a Guess (ex A1): ";
		cin.getline(Guess, 5);
		cout << Guess[0] << Guess[1];
		cout << "\n    ";
		for (int z = 0; z < 10; z++)
		{
			cout << z + 1 << "  ";
		}
		cout << endl;
		for (int x = 0; x < 10; x++)
		{
			cout << row << "  ";
			row++;
			for (int y = 0; y < 10; y++)
			{
				if (x == Guess[0] && y == Guess[1])
				{
					cout << "[X]";
				}
				if (hit == 1)
				{
					cout << "[H]";
				}
				else
				{
					cout << "[O]";
				}
			}
			cout << endl;
		}
	} while (game == true);
}