#include"intern.h"

//intern definition
Intern::Intern() {
	major = uni_name2 = "";
	semester = 0;
}

Intern::~Intern() {}

void Intern::SetInfo(string mid) {
	Employee::SetInfo(mid);

	cout << "nhap major: ";
	cin.ignore();
	getline(cin, major);

	cout << "nhap semester: ";
	cin >> semester;

	cout << "nhap university name: ";
	cin.ignore();
	getline(cin, uni_name2);

	Employee::Set_certificate();
}

void Intern::Print() {
	Employee::Print();
	cout << "major: " << major << endl;
	cout << "semester: " << semester << endl;
	cout << "university name: " << uni_name2 << endl;
	Employee::Show_certificate();
}

int Intern::gettype() {
	return 3;
}