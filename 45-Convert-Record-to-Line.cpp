#include <string>
#include <iostream>
#include <vector>
using namespace std;

struct sClient
{
	string AcountNumber;
	string PinCode;
	string ClientName;
	string ClientPhone;
	double AccountBalance;
};

sClient ReadNewClient()
{
	sClient Client;

	cout << "Enter Acount Number? ";
	getline(cin,Client.AcountNumber);

	cout << "Enter PinCode? ";
	getline(cin, Client.PinCode);

	cout << "Enter Client Name? ";
	getline(cin, Client.ClientName);

	cout << "Enter Client Phone? ";
	getline(cin, Client.ClientPhone);

	cout << "Enter Account Balance? ";
	cin >> Client.AccountBalance;

	return Client;
}

string ConvertRecordToLine(sClient Client, string Seperator = "#//#")
{
	string stClientRecord = "";
	stClientRecord += Client.AcountNumber + Seperator;
	stClientRecord += Client.PinCode + Seperator;
	stClientRecord += Client.ClientName + Seperator;
	stClientRecord += Client.ClientPhone + Seperator;
	stClientRecord += to_string(Client.AccountBalance);

	return stClientRecord;
}

int main()
{
	cout << "Please Enter Client Data: \n\n";

	sClient Client;
	Client = ReadNewClient();
	
	cout << "\n\nClient Record for Saving is: \n";
	cout << ConvertRecordToLine(Client);

	system("pause>0");

	return 0;
}
