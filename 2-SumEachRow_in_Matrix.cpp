#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

enum enRandomRange { Min = 1, Max = 100 };

struct stMatrix3X3
{
    int data[3][3];
};

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

stMatrix3X3 FillMatrixWithRandomNumbers(stMatrix3X3& Matrix3X3,short Rows , short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Matrix3X3.data[i][j] = RandomNumber(enRandomRange::Min, enRandomRange::Max);
        }
    }
    return Matrix3X3;
}

void PrintMatrix(stMatrix3X3 Matrix3X3, short Rows, short Cols)
{
    cout << "The Fllowing is a 3x3 random matrix: \n";

    for (short i = 0; i < Rows; i++)
    {   
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << Matrix3X3.data[i][j] << "      "; 
        } 
        cout << "\n";
    }
}

int RowSum(stMatrix3X3 Matrix3X3, short RowNumber, short Cols)
{
    int Sum = 0;
    for (short j = 0; j <= Cols - 1; j++)
    {
        Sum += Matrix3X3.data[RowNumber][j];
    }
    return Sum;
}

void PrintEachRowSum(stMatrix3X3 Matrix3X3, short Rows, short Cols)
{
    cout << "\nThe following are the sum of each row in th matrix:\n";
        for (short i = 0; i < Rows; i++)
        {
            cout << " Row " << i + 1 << " Sum = " << RowSum(Matrix3X3, i, Cols) << endl;
        }
}

int main()
{
    srand((unsigned)time(NULL));
    stMatrix3X3 Matrix3X3;

    FillMatrixWithRandomNumbers(Matrix3X3, 3, 3);
    PrintMatrix(Matrix3X3,3,3);
    PrintEachRowSum(Matrix3X3, 3, 3);
    system("pause>0");
}

