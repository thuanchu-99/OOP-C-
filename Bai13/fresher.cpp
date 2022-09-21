#include"fresher.h"

//fresher definition
Fresher::Fresher() {
	gradate = { 0,0,0 };
	grarank = uni_name1 = "";
}

Fresher::~Fresher() {}

void Fresher::SetInfo(string a) {
	Employee::SetInfo(a);

	while (true)
	{
		cout << "nhap graduate date: ";
		cin >> gradate.day >> gradate.morth >> gradate.year;
		if (checkdate(gradate))
			break;
	}

	cout << "nhap graduate rank: ";
	cin.ignore();
	getline(cin, grarank);

	cout << "nhap university name: ";
	getline(cin, uni_name1);

	Employee::Set_certificate();
}

void Fresher::Print() {
	Employee::Print();
	cout << "graduate date: " << gradate.day << "/" << gradate.morth << "/" << gradate.year << endl;
	cout << "graduate rank: " << grarank << endl;
	cout << "university name: " << uni_name1 << endl;
	Employee::Show_certificate();
}

int Fresher::gettype() {
	return 2;
}
