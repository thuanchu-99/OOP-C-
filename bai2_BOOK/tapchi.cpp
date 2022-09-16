#include"tailieu.h"

// TAPCHI defintion
TAPCHI::TAPCHI() :TAILIEU() {
	SOPH = THANG = "";
}

TAPCHI::~TAPCHI() {
}

void TAPCHI::SetInfo(string a) {
	TAILIEU::SetInfo(a);
	cout << "NHAAP SO PHAT HANH: ";
	getline(cin, SOPH);
	
	cout << "NHAP THANG PHAT HANH: ";
	getline(cin, THANG);
}

void TAPCHI::Print() {
	TAILIEU::Print();
	cout << "SO PHAT HANH: " << SOPH << endl;
	cout << "THANG PHAT HANH: " << THANG << endl;
}