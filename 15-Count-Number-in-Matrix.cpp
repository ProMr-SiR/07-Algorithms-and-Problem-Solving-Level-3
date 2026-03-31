#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

short CountGivenNumberInMatrix(int Matrix[3][3],short Number, short Rows, short Cols)
{
	short NumberCount = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] == Number)
				NumberCount++;
		}
	}
	return NumberCount;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { { 1,2,2 }, { 2,8,9 }, { 1,5,2 } };

	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

	int Number;
	cout << "Enter the number to count in Matrix? ";
	cin >> Number;

	cout << "Number " << Number << "  Count in Matrix is :" << CountGivenNumberInMatrix(Matrix1, Number, 3, 3);
	system("pause>0");

}
