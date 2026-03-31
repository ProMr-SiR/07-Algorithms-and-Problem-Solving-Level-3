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

int PrintMinimumNumbers(int Matrix1[3][3], short Rows, short Cols)
{
	int Min = Matrix1[0][0];
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] < Min)
			{
				Min = Matrix1[i][j];
			}
		}
	}
	return Min;
	
}

int PrintMaxNumbers(int Matrix1[3][3], short Rows, short Cols)
{
	int Max = Matrix1[0][0];
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] > Max)
			{
				Max = Matrix1[i][j];
			}
		}
	}
	return Max;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { { 5,2,2 }, { 4,8,3 }, { 2,2,100 } };
	int Matrix2[3][3] = { { 1,6,3 }, { 7,8,20 }, { 4,3,0 } };

	cout << "Matrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\nMinimum Number is: " << PrintMinimumNumbers(Matrix1, 3, 3) << endl;

	cout << "\Max Number is: " << PrintMaxNumbers(Matrix1, 3, 3) << endl;


	
	system("pause>0");
}
