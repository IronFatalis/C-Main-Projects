// Mad Libs
// Create a story based on player input

#include <iostream>
#include <string>

using namespace std;

//function declarations

//welcome the player and provide instructions
void welcomePlayer()
{
	cout << "\tWelcome to Mad Libs." << endl << endl;
	cout << "Please provide the following to help create a new story.";
	cout << endl << endl;
}

//prompt player for text, return as a string object
string askText(const string& prompt)
{
	string text;

	cout << prompt;
	cin >> text;

	return text;
}

//prompt player for number, return as an int
int askNumber(const string& prompt = "Enter a number: ")
{
	int num;

	cout << prompt;
	cin >> num;

	return num;
}

//display story using string objects and int passed in
void tellStory(const string& aName, const string& aNoun, int aNumber, const string& aBodyPart, const string& aVerb)
{
	cout << endl << "Here's your story:" << endl << endl;
	cout << "The famous explorer ";
	cout << aName;
	cout << " had nearly given up a life-long quest to find" << endl;
	cout << "The Lost City of ";
	cout << aNoun;
	cout << " when one day, the ";
	cout << aNoun;
	cout << " found the explorer." << endl;
	cout << "Surrounded by ";
	cout << aNumber;
	cout << " " << aNoun;
	cout << ", a tear came to ";
	cout << aName << "'s ";
	cout << aBodyPart << "." << endl;
	cout << "After all this time, the quest was finally over. ";
	cout << "And then, the ";
	cout << aNoun << endl;
	cout << "promptly devoured ";
	cout << aName << ". ";
	cout << "The moral of the story? Be careful what you ";
	cout << aVerb;
	cout << " for.";
}

int main()
{
	welcomePlayer();

	string name = askText("Enter a name: ");
	string noun = askText("Enter a plural noun: ");
	int number = askNumber();
	string bodyPart = askText("Enter a body part: ");
	string verb = askText("Enter a verb: ");

	tellStory(name, noun, number, bodyPart, verb);

	system("pause");
	return 0;
}