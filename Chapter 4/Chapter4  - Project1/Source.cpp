// Chapter 4 Project 1

#include <iostream>

using namespace std;

//function declarations
int askNumber(int low, int high)
{
	int num;
	cout << "Please enter a number from " << low << " to " << high << "." << endl;
	cin >> num;
	while (!cin.good() || num < low || num > high)
	{
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		if (num < low)
		{
			cout << "The lowest possible number to enter is " << low << ".\n";
		}
		else
		{
			cout << "The highest possible number to enter is " << high << ".\n";
		}
		cout << "Please enter a valid number." << endl;
		cin >> num;
	}
	cout << "The number you picked is " << num << endl;
		return num;
}


int main()
{
	int number = askNumber(1,10);

	system("pause");
	return 0;
}