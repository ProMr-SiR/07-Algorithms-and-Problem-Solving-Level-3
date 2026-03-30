#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

enum RandomRange { Min = 1, Max = 100 };

struct stMatrix3X3
{
    int data[3][3];
};

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

stMatrix3X3 ReadArryOf3X3MatrixWithRandomNumberInside(stMatrix3X3& Matrix3X3)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Matrix3X3.data[i][j] = RandomNumber(RandomRange::Min, RandomRange::Max);
        }
    }
    return Matrix3X3;
}

void PrintArryOf3X3MatrixWinthRandomNumberInside(stMatrix3X3 Matrix3X3)
{
    cout << "The Fllowing is a 3x3 random matrix: ";

    for (int i = 0; i < 3; i++)
    {
        cout << "\n";
        for (int j = 0; j < 3; j++)
        {
            cout << setw(3) << Matrix3X3.data[i][j] << "      ";
            
        } 
    }
    cout << endl;   
}

int main()
{
    srand((unsigned)time(NULL));
    stMatrix3X3 Matrix3X3;
    ReadArryOf3X3MatrixWithRandomNumberInside(Matrix3X3);
    PrintArryOf3X3MatrixWinthRandomNumberInside(Matrix3X3);
}

