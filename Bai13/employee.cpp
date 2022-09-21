#include"cetificate.h"
#include"employee.h"

//Employee definition
Employee::Employee() {
	ID = fullname = phone = email = "";
	birthday = { 0,0,0 };
}

Employee::~Employee() {}

string Employee::getID() {
	return ID;
}

void Employee::SetInfo(string a) {

	/*cout << "NHAP THONG TIN NHAN VIEN:" << endl;
	cout << "nhap ID: ";
	cin.ignore();
	getline(cin, ID);*/

	ID = a;

	while (true)
	{
		cout << "nhap full name: ";
		getline(cin, fullname);
		if (checkname(fullname))
			break;
	}

	while (true)
	{
		cout << "nhap phone number: ";
		getline(cin, phone);
		if (checkphone(phone))
			break;
	}

	while (true)
	{
		cout << "nhap email: ";
		getline(cin, email);
		if (checkmail(email))
			break;
	}

	while (true)
	{
		cout << "nhap birthday: ";
		cin >> birthday.day >> birthday.morth >> birthday.year;
		if (checkdate(birthday))
			break;
	}

	/*int c;
	cout << "1: co cetificate." << endl;
	cout << "2:exit." << endl;
	cout << "nhap: ";
	cin >> c;
	if (c == 1)
		Set_certificate();*/
}

void Employee::Print() {
	cout << "THONG TIN NHAN VIEN:" << endl;
	cout << "ID: " << ID << endl;
	cout << "full name: " << fullname << endl;
	cout << "phone number: " << phone << endl;
	cout << "email: " << email << endl;
	cout << "birthday: " << birthday.day << "/" << birthday.morth << "/" << birthday.year << endl;
	/*if (Cer.size() != 0) {
		Show_certificate();
	}*/
}

void Employee::Set_certificate() {
	int choosecer;
	while (true) {
		cout << "\nTHEM CERTIFICATE:" << endl;
		cout << "1: them certificate." << endl;
		cout << "2: exit" << endl;
		cout << "nhap choose: ";
		while (true) {
			cin >> choosecer;
			if (choosecer < 1 || choosecer>2) {
				cout << "chi duoc phep chon 1 2." << endl;
				cout << "chon lai: ";
			}
			else
				break;
		}
		if (choosecer == 2)
			break;

		Certificate cer;
		cer.SetCer();
		Cer.push_back(cer);
	}
	cout << "\n------------------------------\n";
}

void Employee::Show_certificate() {
	if (Cer.size() == 0) {
		cout << "NHAN VIEN KHONG CO CHUNG CHI." << endl;
	}
	else
	{
		for (int i = 0; i < Cer.size(); i++) {
			cout << "CHUNG CHI " << i + 1 << ":" << endl;
				Cer[i].PrintCer();
			}
	}
	
	cout << "\n------------------------------\n";
}

