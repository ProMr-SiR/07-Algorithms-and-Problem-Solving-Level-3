#include <string>
#include <iostream>
using namespace std;

char ReadCharactrer()
{
	char Ch1;
	cout << "Please Enter a Charactrer?\n";
	cin >> Ch1;
	return Ch1;
}

char InvertLetterCase(char Ch1)
{
	return isupper(Ch1) ? tolower(Ch1) :  toupper(Ch1);
}

int main()
{
	char Ch1 = ReadCharactrer();

	cout << "\nChar after Inverting case:\n";
	Ch1 = InvertLetterCase(Ch1);
	cout << Ch1 << endl;

	system("pause>0");
}
