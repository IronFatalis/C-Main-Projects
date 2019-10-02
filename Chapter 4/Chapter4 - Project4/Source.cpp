// Word Jumble
// Player must guess a jumbled word

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string secretWord, jumbled;

string randomWord()
{
	//possible words to jumble
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS] =
	{
		"wall",
		"glasses",
		"labored",
		"persistent",
		"jumble"
	};

	//random index number
	int choice = (rand() % NUM_WORDS);

	//word player must guess
	secretWord = WORDS[choice];

	return secretWord;
}

string mixUp(const string& aWord)
{
	//jumbled version of word
	jumbled = secretWord;

	//num characters in jumbled
	size_t length = jumbled.size();

	//mix up letters in jumbled
	for (size_t i = 0; i < length; ++i)
	{
		//swap letter at index i with letter at random index
		size_t randomIndex = (rand() % length);		//rand num, 0 thru length - 1
		char temp = jumbled[i];
		jumbled[i] = jumbled[randomIndex];
		jumbled[randomIndex] = temp;
	}
	return jumbled;
}

void welcomePlayer(const string& aJumble)
{
	//welcome player and explain game
	cout << "\t\t\tWelcome to Word Jumble!";
	cout << endl << endl;
	cout << "Unscramble the letters to make a word.";
	cout << endl;
	cout << "Enter 'quit' to quit the game.";
	cout << endl << endl;
	cout << "The jumble is: " << jumbled;
}

void play(const string& aWord)
{
	// Guessing loop			//Player's guess
	string guess;
	do
	{
		cout << endl << endl << "Your guess: ";
		cin >> guess;

		if ((guess != secretWord) && (guess != "quit"))
		{
			cout << "Sorry, that's not it.";
		}
	} while ((guess != secretWord) && (guess != "quit"));

	//do loop can end without correct guess, so check guess
	if (guess == secretWord)
		cout << endl << "That's it! You guessed it!" << endl;

	cout << endl << "Thanks for playing." << endl;
}

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	string word = randomWord();
	string jumble = mixUp(word);
	welcomePlayer(jumble);
	play(word);

	system("pause");
	return 0;
}