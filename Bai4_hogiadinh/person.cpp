#include"person.h"

person::person() {
	hoten = nghenghiep = CCCD = "";
	age = 0;
}

person::~person() {
}

string person::getCCCD() {
	return CCCD;
}

void person::setinfo() {
	cout << "NHAP THONG TIN CONG DAN: " << endl;

	cout << "nhap ho va ten: ";
	cin.ignore();
	getline(cin, hoten);

	cout << "nhap tuoi: ";
	cin >> age;

	cin.ignore();
	cout << "nhap nghe nghiep: ";
	getline(cin, nghenghiep);

	cout << "nhap so CCCD: ";
	getline(cin, CCCD);
}

void person::show() {
	cout << "THONG TIN CONG DAN: " << endl;
	cout << "ho va ten: " << hoten << endl;
	cout << "tuoi: " << age << endl;
	cout << "nghe nghiep: " << nghenghiep << endl;
	cout << "so CCCD: " << CCCD << endl;
}