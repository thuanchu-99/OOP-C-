#include"goodstudent.h"

Goodstudent::Goodstudent() :Student() {
	GPA = 0.0;
	bestreward = "";
}

Goodstudent::~Goodstudent() {}

void Goodstudent::SetInfo() {
	Student::SetInfo();
	cout << "nhap GPA: ";
	cin >> GPA;
	cout << "nhap best reward: ";
	cin.ignore();
	getline(cin, bestreward);
}

void Goodstudent::Print() {
	Student::Print();
	cout << "GPA: " << GPA << endl;
	cout << "best reward: " << bestreward << endl;
}

double Goodstudent::getGPA() {
	return GPA;
}

int Goodstudent::gettype() {
	return 1;
}