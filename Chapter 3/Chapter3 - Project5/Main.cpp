// Binary Code Breaker

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	int number1 = (rand() % 2);
	int	number2 = (rand() % 2);
	int	number3 = (rand() % 2);
	int	number4 = (rand() % 2);
	int guess1, guess2, guess3, guess4;
	int correct = 0;
	int finalGuess = 5;
	int guessLeft;

	do
	{
		cout << "You have 5 guesses to guess the correct 4 number code of 1's and 0's." << endl;
		cout << "After each guess you will be told how many numbers you got correct" << endl;
		cout << "until either you guess them all right or run out of guesses." << endl << endl;
		cout << "Enter first number guess: ";
		cin >> guess1;
		while (!cin.good() || guess1 < 0 || guess1 > 1)
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Please enter a '0' or '1'." << endl;
			cin >> guess1;
		}
		cout << "Enter second number guess: ";
		cin >> guess2;
		while (!cin.good() || guess2 < 0 || guess2 > 1)
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Please enter a '0' or '1'." << endl;
			cin >> guess2;
		}
		cout << "Enter third number guess: ";
		cin >> guess3;
		while (!cin.good() || guess3 < 0 || guess3 > 1)
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Please enter a '0' or '1'." << endl;
			cin >> guess3;
		}
		cout << "Enter fourth number guess: ";
		cin >> guess4;
		while (!cin.good() || guess4 < 0 || guess4 > 1)
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Please enter a '0' or '1'." << endl;
			cin >> guess4;
		}

		if (guess1 == number1)
		{
			correct = correct + 1;
		}

		if (guess2 == number2)
		{
			correct = correct + 1;
		}

		if (guess3 == number3)
		{
			correct = correct + 1;
		}

		if (guess4 == number4)
		{
			correct = correct + 1;
		}

		if (correct == 4)
		{
			system("CLS");
			guessLeft = 6 - finalGuess;
			if (guessLeft == 1)
			{
				cout << "\tYou WIN!\nYou found the code in " << guessLeft << " guess!" << endl;
			}
			else
			{
				cout << "\tYou WIN!\nYou found the code in " << guessLeft << " guesses!" << endl;
			}
			system("pause");
			return 0;
		}
		else
		{
			if (finalGuess > 0)
			{
				finalGuess = finalGuess - 1;
				cout << "\nYou got " << correct << " correct." << endl << endl;
				cout << "You have " << finalGuess << " guess left." << endl << endl;
				correct = 0;
				system("pause");
				system("CLS");
			}
		}
	} while (finalGuess > 0);
	cout << "\tGAME OVER!" << endl <<endl;
	cout << "The code was " << number1 << number2 << number3 << number4 << ".\n" << endl;

	system("pause");
	return 0;
};

