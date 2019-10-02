//card counter

# include <iostream>
# include <string>

using namespace std;

int main()
{
	const int MAX_VALUE = 13;
	const int MAX_SUIT = 4;

	string cardValue[MAX_VALUE] = { "2","3","4","5","6", "7", "8", "9", "10", "J", "Q","K","A" };
	

	string cardSuit[MAX_SUIT] = { "c", "h", "s", "d" };


	cout << "Counting cards:\n\n";
	const int ROWS = 13;
	const int COLUMNS = 4;
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
		{
			cout << cardValue[i] << cardSuit[j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}