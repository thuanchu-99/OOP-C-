#include"experience.h"

//experience definition
Experience::Experience() {
	proskill = "";
	yearex = 0;
}

Experience::~Experience() {}

void Experience::SetInfo(string a) {
	Employee::SetInfo(a);
	cout << "nhap so nam kinh nghiem: ";
	cin >> yearex;
	cout << "nhap best skill: ";
	cin.ignore();
	getline(cin, proskill);
	Employee::Set_certificate();
}

void Experience::Print() {
	Employee::Print();
	cout << "so nam kinh nghiem: " << yearex << endl;
	cout << "best skill: " << proskill << endl;
	Employee::Show_certificate();
}

int Experience::gettype() {
	return 1;
}