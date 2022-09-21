#include"student.h"

//Student definition
Student::Student() {
	fullname = sex = phonenumber = uni_name = gradelevel = "";
	dob = { 0,0,0 };
}

Student::~Student() {}

void Student::SetInfo() {
	cout << "\nNHAP THONG TIN SINH VIEN: " << endl;
	cin.ignore();

	while (true)
	{
		cout << "nhap full name: ";
		getline(cin, fullname);
		if (checkname(fullname))
			break;
	}


	cout << "nhap gioi tinh: ";
	getline(cin, sex);

	while (true)
	{
		cout << "nhap phone number: ";
		getline(cin, phonenumber);
		if (checkphone(phonenumber))
			break;
	}

	cout << "nhap ten truong: ";
	getline(cin, uni_name);

	cout << "nhap hoc loai: ";
	getline(cin, gradelevel);

	while (true)
	{
		cout << "nhap ngay sinh: ";
		cin >> dob.day >> dob.morth >> dob.year;
		if (checkdate(dob))
			break;
	}

}

void Student::Print() {
	cout << "THONG TIN SINH VIEN: " << endl;
	cout << "ho va ten: " << fullname << endl;
	cout << "ngay sinh: " << dob.day << "/" << dob.morth << "/" << dob.year << endl;
	cout << "gioi tinh: " << sex << endl;
	cout << "so phone: " << phonenumber << endl;
	cout << "truong hoc: " << uni_name << endl;
	cout << "xep loai: " << gradelevel << endl;
}

string Student::getname() {
	return fullname;
}