// High score table

# include <iostream>
# include <string>

using namespace std;

int main()
{
	
	const int MAX_VALUE = 5;
	const int MAX_NAMES = 5;

	string name1 = "Ryan";
	string name2 = "Ryan";
	string name3 = "Ryan";
	string name4 = "Ryan";
	string name5 = "Ryan";
	string newName;

	int score1 = 1000;
	int score2 = 1000;
	int score3 = 1000;
	int score4 = 1000;
	int score5 = 1000;
	int newScore;

	bool exit = false;

	cout << "\tHIGH SCORE TABLE" << endl << endl;
	cout << "\t" << name1 << "\t" << score1 << endl;
	cout << "\t" << name2 << "\t" << score2 << endl;
	cout << "\t" << name3 << "\t" << score3 << endl;
	cout << "\t" << name4 << "\t" << score4 << endl;
	cout << "\t" << name5 << "\t" << score5 << endl << endl;

	do
	{

		cout << "Enter your name. (Enter 'exit' if you would like to quit.)" << endl;
		cin >> newName;
		system("CLS");
		cout << "\tHIGH SCORE TABLE" << endl << endl;
		cout << "\t" << name1 << "\t" << score1 << endl;
		cout << "\t" << name2 << "\t" << score2 << endl;
		cout << "\t" << name3 << "\t" << score3 << endl;
		cout << "\t" << name4 << "\t" << score4 << endl;
		cout << "\t" << name5 << "\t" << score5 << endl << endl;

		if (newName != "exit")
		{
			cout << "Enter your high score." << endl;
			cin >> newScore;
			system("CLS");
			cout << "\tHIGH SCORE TABLE" << endl << endl;
			cout << "\t" << name1 << "\t" << score1 << endl;
			cout << "\t" << name2 << "\t" << score2 << endl;
			cout << "\t" << name3 << "\t" << score3 << endl;
			cout << "\t" << name4 << "\t" << score4 << endl;
			cout << "\t" << name5 << "\t" << score5 << endl << endl;
			while (!cin.good() || newScore < 0)
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				cout << "Please enter a positive number." << endl;
				cin >> newScore;
				system("CLS");
				cout << "\tHIGH SCORE TABLE" << endl << endl;
				cout << "\t" << name1 << "\t" << score1 << endl;
				cout << "\t" << name2 << "\t" << score2 << endl;
				cout << "\t" << name3 << "\t" << score3 << endl;
				cout << "\t" << name4 << "\t" << score4 << endl;
				cout << "\t" << name5 << "\t" << score5 << endl << endl;
			}
		}
		else
			{
				cout << "Goodbye!" << endl;
				system("pause");
				return 0;
			}

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
			cout << "Sorry, you didn't make the leaderboard\n"<<endl;
		}
		system("pause");
		system("CLS");
		cout << "\tHIGH SCORE TABLE" << endl << endl;
		cout << "\t" << name1 << "\t" << score1 << endl;
		cout << "\t" << name2 << "\t" << score2 << endl;
		cout << "\t" << name3 << "\t" << score3 << endl;
		cout << "\t" << name4 << "\t" << score4 << endl;
		cout << "\t" << name5 << "\t" << score5 << endl << endl;
	} while (!exit);



	cout << endl;
	system("pause");
	return 0;
};
