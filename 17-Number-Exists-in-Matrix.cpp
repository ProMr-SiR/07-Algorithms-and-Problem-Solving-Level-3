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


bool IsNumberExistsInMatrix(int Matrix1[3][3],int Number, short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == Number)
				return true;
		}
	}
	return false;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { { 1,2,2 }, { 1,1,1 }, { 0,0,0 } };

	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	
	int Number;
	cout << "Please, Enter The Number to Look for in Matrix? ";
	cin >> Number;


	if (IsNumberExistsInMatrix(Matrix1, Number, 3, 3))
		cout << "Yes, It is there." << endl;
	else
		cout << "No, It's NOT there." << endl;

	system("pause>0");

}
