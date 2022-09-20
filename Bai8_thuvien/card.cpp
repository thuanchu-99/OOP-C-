#include"student.h"

Card::Card() :Student() {
	maphieu = sohieusach = "";
	ngaymuon = { 0,0,0 };
	ngaytra = { 0,0,0 };
}

Card::~Card() {
}

string Card::getmp() {
	return maphieu;
}

void Card::set() {
	cout << "NHAP THONG TIN PHIEU:" << endl;
	Student::set();
	cout << "nhap ma phieu: ";
	getline(cin, maphieu);

	cout << "nhap so hieu sach: ";
	getline(cin, sohieusach);

	cout << "nhap ngay muon: ";
	cin >> ngaymuon.day >> ngaymuon.morth >> ngaymuon.year;

	cout << "nhap ngay tra: ";
	cin >> ngaytra.day >> ngaytra.morth >> ngaytra.year;
}

void Card::show() {
	cout << "THONG TIN MA PHIEU:" << endl;
	Student::show();
	cout << "ma phieu: " << maphieu << endl;
	cout << "so hieu sach: " << sohieusach << endl;
	cout << "ngay muon: " << ngaymuon.day << "/" << ngaymuon.morth << "/" << ngaymuon.year << endl;
	cout << "ngay tra: " << ngaytra.day << "/" << ngaytra.morth << "/" << ngaytra.year << endl;
}

