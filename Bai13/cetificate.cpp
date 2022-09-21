#include"cetificate.h"

//Certificate definition
Certificate::Certificate() {
	ID = name = rank = "";
	datecer = { 0,0,0 };
}

Certificate::~Certificate() {
}

void Certificate::SetCer() {
	cout << "NHAP THONG TIN CERTIFICATE:" << endl;
	cout << "nhap ID: ";
	cin.ignore();
	getline(cin, ID);
	cout << "nhap name: ";
	getline(cin, name);
	cout << "nhap rank: ";
	getline(cin, rank);
	while (true)
	{
		cout << "nhap date: ";
		cin >> datecer.day >> datecer.morth >> datecer.year;
		if (checkdate(datecer))
			break;
	}

}

void Certificate::PrintCer() {
	cout << "THONG TIN CERTIFICATE:" << endl;
	cout << "ID: " << ID << endl;
	cout << "Name: " << name << endl;
	cout << "Rank: " << rank << endl;
	cout << "Date: " << datecer.day << "/" << datecer.morth << "/" << datecer.year << endl;
}
