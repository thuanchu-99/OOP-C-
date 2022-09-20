#include"student.h"

Student::Student() {
	hoten = lop = "";
	age = 0;
}

Student::~Student() {
}

void Student::set() {
	cout << "nhap ho va ten: ";
	cin.ignore();
	getline(cin, hoten);
	cout << "nhap tuoi: ";
	cin >> age;
	cin.ignore();
	cout << "nhap lop: ";
	getline(cin, lop);
}

void Student::show() {
	cout << "Ho va ten: " << hoten << endl;
	cout << "Tuoi: " << age << endl;
	cout << "Lop: " << lop << endl;
}