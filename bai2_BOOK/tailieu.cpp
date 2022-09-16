#include"tailieu.h"

// TAILIEU defintion
TAILIEU::TAILIEU() {
	MATL = TENNXB = BANPH = "";
}

TAILIEU::~TAILIEU() {
}

string TAILIEU::getMATL() {
	return MATL;
}

void TAILIEU::SetInfo(string a) {
	
	cout << "NHAP TEN NHA XUAT BAN: ";
	getline(cin, TENNXB);

	cout << "NHAP BAN PHAT HANH: ";
	getline(cin, BANPH);

	MATL = a;
}

void TAILIEU::Print() {
	cout << "\nTHONG TIN TAI LIEU" << endl;
	cout << "MA TAI LIEU: " << MATL << endl;
	cout << "TEN NHA XUAT BAN: " << TENNXB << endl;
	cout << "BAN PHAT HANH: " << BANPH << endl;
}
