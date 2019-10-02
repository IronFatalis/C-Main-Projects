// Guess My Number
// Player tries to guess random number between 1 and 100

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//max possible secert number
const int MAX_NUMBER = 100;
int tries = 0;		//number of times player has guessed
int guess;			//player's current guess
int secretNumber;

void welcomePlayer()
{
	cout << "\tWelcome to Guess My Number" << endl << endl;
	cout << "Guess my secert number between 1 and ";
	cout << MAX_NUMBER << "." << endl << endl;
}

int randomNumber(int low, int high)
{
	secretNumber = (rand() % MAX_NUMBER) + 1;
	return secretNumber;
}

int askNumber(int low, int high)
{
	//Tells what number was guessed
	int num = 0;
	return num;
}

void play(int secretNumber)
{
	do
	{
		cout << "Enter a guess: ";
		cin >> guess;
		//askNumber()
		++tries;

		if (guess > secretNumber)
		{
			cout << "Too high!" << endl << endl;
		}

		if (guess < secretNumber)
		{
			cout << "Too low!" << endl << endl;
		}
	} while (guess != secretNumber);
	cout << endl;
	cout << "You win! You got it in " << tries << " tries!";
	cout << endl;
}

int main()
{
	//seed rand num generator
	srand(static_cast<unsigned int>(time(0)));

	//rand num between 1-100
	randomNumber(0, MAX_NUMBER);

	// intro
	welcomePlayer();

	//Guessing loop
	play(secretNumber);
	system("pause");
	return 0;
}