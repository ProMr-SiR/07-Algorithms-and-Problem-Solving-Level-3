#include <iostream>
#include <fstream>
#include <string>

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
	
	// Usage of std::ws will extract allthe whitespace character
	cout << "Enter Acount Number? ";
	getline(cin >> ws, Client.AcountNumber);

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

string ConvertRecordtoLine(sClient Client, string Seperator = "#//#")
{
	
	string sClientRecord = "";

	sClientRecord += Client.AcountNumber + Seperator;
	sClientRecord += Client.PinCode + Seperator;
	sClientRecord += Client.ClientName + Seperator;
	sClientRecord += Client.ClientPhone + Seperator;
	sClientRecord += to_string(Client.AccountBalance) + Seperator;

	return sClientRecord;
}

void AddingDataToTheFile(string FileName,string stDataLine)
{
	fstream Myfile;
	Myfile.open(FileName, ios::out | ios::app);

	if (Myfile.is_open())
	{	
		Myfile << stDataLine << endl;

		Myfile.close();
	}
}

void AddNewClient()
{
	sClient Client;
	Client = ReadNewClient();
	AddingDataToTheFile("ClientsFileName.txt", ConvertRecordtoLine(Client));
}

void AddClients()
{
	char AddMore = 'Y';
	do
	{
		system("cls");
		cout << "Adding New Client:\n\n";

		AddNewClient();
		cout << "\nClient Added Successfully, do you want to add more clients ? Y / N ? ";
		cin >> AddMore;
	} while (toupper(AddMore) == 'Y');
}

int main()
{
	
	AddClients();

	system("pause>0");

	return 0;
}
