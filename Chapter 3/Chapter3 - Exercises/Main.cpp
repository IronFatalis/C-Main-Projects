// Word Jumble
// Player must guess a jumbled word

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	/*
	// Exercise 1
	// Adding score per letter

	srand(static_cast<unsigned int>(time(0)));

	//possible words to jumble
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"wall","Do you feel you're banging your head against something?"},
		{"glasses","These might help you see the answer."},
		{"labored","Going slowly, is it?"},
		{"persistent","Keep at it."},
		{"jumble","It's what the game is all about."}
	};

	//random index number
	int choice = (rand() % NUM_WORDS);

	//word player must guess
	string secretWord = WORDS[choice][WORD];	//word to guess
	string secretHint = WORDS[choice][HINT];	//hint for word

	//jumbled version of word
	string jumbled = secretWord;

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

	//Score
	int score = length*100;

	//welcome player and explain game
	cout << "\t\t\tWelcome to Word Jumble!";
	cout << endl << endl;
	cout << "Unscramble the letters to make a word.";
	cout << endl;
	cout << "You get 100 points per letter in the word.";
	cout << endl;
	cout << "Enter 'hint' for a hint at the cost of points.";
	cout << endl;
	cout << "Enter 'quit' to quit the game.";
	cout << endl << endl;
	cout << "The jumble is: " << jumbled;

	// Guessing loop			//Player's guess
	string guess;
	do
	{
		cout << endl << endl << "Your guess: ";
		cin >> guess;
		if ((guess != secretWord) && (guess != "quit") && (guess == "hint"))
		{
			score = score - 200;
			cout << "You lose 200 points for the hint!" << endl;
			cout << secretHint;
		}
		else if ((guess != secretWord) && (guess != "quit") && (guess != "hint"))
		{
			cout << "Sorry, that's not it.";
		}
	} while ((guess != secretWord) && (guess != "quit"));

	//do loop can end without correct guess, so check guess
	if (guess == secretWord)
	{
		cout << endl << "That's it! You guessed it!" << endl;
		cout << "You scored " << score << " points for that word!" << endl;
	}
	cout << endl << "Thanks for playing." << endl;
*/
	// Exercise 2
	// What is wrong with this?

/*
	for (int i = 0; i <= phrase.size(); ++i)
	{
		cout << "Character at positioon " << i << " is: " << phrase[i] << endl;
	}
*/

	// Exercise 3
	// What is wrong with this?


	return 0;
}