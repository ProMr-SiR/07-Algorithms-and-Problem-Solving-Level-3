#include <string>
#include <iostream>
using namespace std;

char ReadChar()
{
	char Ch1;
	cout << "\nPlease Enter a Character?\n";
	cin >> Ch1;
	return Ch1;
}

char isVowelLetter(char Ch1)
{
	Ch1 = tolower(Ch1);
	return((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
}

int main()
{
	char Ch1 = ReadChar();
	if (isVowelLetter(Ch1))
		cout << "Yes, Letter  \'" << Ch1 <<  "\' is vowel " << endl;
	else 
		cout << "No, Letter  \'" << Ch1 << "\' is NOT vowel " << endl;

	system("pause>0");
}
