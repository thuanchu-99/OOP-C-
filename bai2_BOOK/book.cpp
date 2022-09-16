#include"tailieu.h"

//BAO definition
BOOK::BOOK() :TAILIEU() {
	TACGIA = "";
	SOTRANG = 0;
}

BOOK::~BOOK() {
}

void BOOK::SetInfo(string a) {
	TAILIEU::SetInfo(a);
	cout << "NHAP TAC GIA: ";
	getline(cin, TACGIA);
	cout << "NHAP SO TRANG: ";
	cin >> SOTRANG;
}

void BOOK::Print() {
	TAILIEU::Print();
	cout << "TAC GIA: " << TACGIA << endl;
	cout << "SO TRANG: " << SOTRANG << endl;
}