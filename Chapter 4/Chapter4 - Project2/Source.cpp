// Chapter 4 Project 1

# include <iostream>
# include <cstdlib>
# include <ctime>

using namespace std;

//function declarations
int randomNumber(int low, int high)
{	
	int num = (rand() % (high-low))+low;
	cout << num << endl;
	return num;
}


int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int high = 0;
	int low = 0;


	cout << "Please enter your highest limit: ";
	cin >> high;
	cout << "10 Random numbers from " << low << "-" << high << "." << endl << endl;
	for (int i = 0; i < 10; ++i)
	{
		int number = randomNumber(low,high);
	}
	system("pause");
	system("CLS");



	cout << "Please enter your lowest limit: ";
	cin >> low;
	cout << "Please enter your highest limit: ";
	cin >> high;
	cout << "10 Random numbers from " << low << "-" << high << "." << endl << endl;
	for (int i = 0; i < 10; ++i)
	{
		int number = randomNumber(low, high);
	}

	system("pause");
	return 0;
}