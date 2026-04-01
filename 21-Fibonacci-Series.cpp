#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void PrintFibonacciUsingLoop(short Number)
{
	int NumPrev1 = 1;
	int NumPrev2 = 0;
	int FebNumber = 0;
	cout << "1  ";
	for (int i = 2; i <= Number; i++)
	{
		FebNumber = NumPrev1 + NumPrev2;
		cout << FebNumber << "  ";
		NumPrev2 = NumPrev1;
		NumPrev1 = FebNumber;
		
	}
}

int main()
{
	PrintFibonacciUsingLoop(10);

	system("pause>0");
}
