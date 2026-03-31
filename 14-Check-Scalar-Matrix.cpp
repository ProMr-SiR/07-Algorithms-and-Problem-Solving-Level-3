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

bool IsScalarMatrix(int Matrix[3][3], short Rows, short Cols)
{
	int FirstDiagElemement = Matrix[0][0];
	//check Diagonal elements are 1 and rest elements are 0
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			//check for diagonals element
			if (i == j && Matrix[i][j] != FirstDiagElemement)
				return false;
			//check for rest elements
			if( i != j && Matrix[i][j] != 0 )
				return false;
		}
	}
	return true;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { { 1,0,0 }, { 0,1,0 }, { 0,0,1 } };
	int Matrix2[3][3] = { { 9,0,0 }, { 0,9,0 }, { 0,0,9 } };

	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix2, 3, 3);

	if (IsScalarMatrix(Matrix2, 3, 3))
		cout << "\nYES: Matrix is Scalar.";
	else
		cout << "\nNo: Matrix is NOT Scalar.";
	system("pause>0");

}
