// High score table

# include <iostream>
# include <string>

using namespace std;

string name1, name2, name3, name4, name5, newName;
int score1, score2, score3, score4, score5, newScore;

void SetDefaultEntries()
{
	const int MAX_VALUE = 5;
	const int MAX_NAMES = 5;

	name1 = "Ryan";
	name2 = "Ryan";
	name3 = "Ryan";
	name4 = "Ryan";
	name5 = "Ryan";
	

	score1 = 1000;
	score2 = 1000;
	score3 = 1000;
	score4 = 1000;
	score5 = 1000;
}

void DisplayTable()
{
	cout << "\tHIGH SCORE TABLE" << endl << endl;
	cout << "\t" << name1 << "\t" << score1 << endl;
	cout << "\t" << name2 << "\t" << score2 << endl;
	cout << "\t" << name3 << "\t" << score3 << endl;
	cout << "\t" << name4 << "\t" << score4 << endl;
	cout << "\t" << name5 << "\t" << score5 << endl << endl;

	system("pause");
	system("CLS");
}

int InsertEntry()
{
		cout << "Enter your name: ";
		cin >> newName;
		cout << "Enter your new high score: ";
		cin >> newScore;
		system("CLS");

		if (newScore >= score1)
		{
			cout << "Congrats! You made the top score!\n\n";
			score5 = score4;
			name5 = name4;
			score4 = score3;
			name4 = name3;
			score3 = score2;
			name3 = name2;
			score2 = score1;
			name2 = name1;
			score1 = newScore;
			name1 = newName;
		}
		else if (newScore >= score2 && newScore < score1)
		{
			cout << "Congrats! You made second place!\n\n";
			score5 = score4;
			name5 = name4;
			score4 = score3;
			name4 = name3;
			score3 = score2;
			name3 = name2;
			score2 = newScore;
			name2 = newName;
		}
		else if (newScore >= score3 && newScore < score2)
		{
			cout << "Congrats! You made third place!\n\n";
			score5 = score4;
			name5 = name4;
			score4 = score3;
			name4 = name3;
			score3 = newScore;
			name3 = newName;
		}
		else if (newScore >= score4 && newScore < score3)
		{
			cout << "Congrats! You made fourth place!\n\n";
			score5 = score4;
			name5 = name4;
			score4 = newScore;
			name4 = newName;
		}
		else if (newScore >= score5 && newScore < score4)
		{
			cout << "Congrats! You made fifth place!\n\n";
			score5 = newScore;
			name5 = newName;
		}
		else
		{
			cout << "Sorry, you didn't make the leaderboard\n" << endl;
		}
		DisplayTable();
		return 0;
		system("CLS");
}

int main()
{
	SetDefaultEntries();
	string option;

	do
	{
		cout << "Please select an option.\n0 - Quit\n1 - Display table\n2 - Insert new entry into table" << endl;
		cin >> option;
		system("CLS");
		if (option == "0")
		{
			cout << "Goodbye!" << endl;
			system("pause");
			return 0;
		}
		else if (option == "1")
		{
			DisplayTable();
		}
		else if (option == "2")
		{
			InsertEntry();
		}
		else
		{		
			cout << "Please select a valid option" << endl;
			system("pause");
			system("CLS");
		}
	} while (option != "0");
	system("pause");
	return 0;
};
