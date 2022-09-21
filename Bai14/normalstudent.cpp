#include"normalstudent.h"

//normalstudent definition
Normalstudent::Normalstudent() :Student() {
	toeic = 0;
	testscore = 0.0;
}

Normalstudent::~Normalstudent() {}

int Normalstudent::getTOEC() {
	return toeic;
}

void Normalstudent::SetInfo() {
	Student::SetInfo();
	cout << "nhap diem toeic: ";
	cin >> toeic;
	cout << "nhap testscore: ";
	cin >> testscore;
}

void Normalstudent::Print() {
	Student::Print();
	cout << "diem toeic: " << toeic << endl;
	cout << "diem testscore: " << testscore << endl;
}

int Normalstudent::gettype() {
	return 2;
}

double Normalstudent::gettestscore() {
	return testscore;
}