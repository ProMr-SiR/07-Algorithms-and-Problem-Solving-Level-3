#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d ", 2, arr[i][j]);
			//cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}


void PtintMiddleRowOfMatrix1(int Matrix1[3][3], short Rows, short Cols)
{
	short MiddleRow = Rows / 2;
	for (short j = 0; j < Cols; j++)
	{
		printf(" %0*d ", 2, Matrix1[MiddleRow][j]);
	}
	cout << "\n";
}

void PtintMiddleColOfMatrix1(int Matrix1[3][3], short Rows, short Cols)
{
	short MiddleCol = Cols / 2;
	for (short j = 0; j < Rows; j++)
	{
		printf(" %0*d ", 2, Matrix1[j][MiddleCol]);
	}
	cout << "\n";
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Matrix1[3][3];

	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "Matrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "Middle Row of Matrix1 is: \n";
	PtintMiddleRowOfMatrix1(Matrix1, 3, 3);

	cout << "Middle Col of Matrix1 is: \n";
	PtintMiddleColOfMatrix1(Matrix1, 3, 3);
	system("pause>0");
}
