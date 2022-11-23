#include <iostream>
using namespace std;

int main()
{
	const int ROWS = 5;
	const int COLS = 5;

	int arr[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	cout << "Before" << endl;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "   ";
		}
		cout << endl;
	}

	int k, t;
	cout << "Enter a number: ";
	cin >> k;

	if (k > ROWS - 1 || k > COLS - 1)
	{
		cout << "Error!" << endl;
	}

	else
	{
		cout << "After" << endl;
		for (int i = 0; i < ROWS; i++)
		{
			t = arr[i][k];
			arr[i][k] = arr[k][i];
			arr[k][i] = t;
		}

		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j] << "   ";
			}
			cout << endl;
		}
	}


}