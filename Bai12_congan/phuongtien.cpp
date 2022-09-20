#include"phuongtien.h"

//Phuongtien definition
Phuongtien::Phuongtien() {
	ID = hangxe = giaban = mauxe = "";
	namsx = 0;
}

Phuongtien::~Phuongtien() {
}

string Phuongtien::getID() {
	return ID;
}

string Phuongtien::gethangxe() {
	return hangxe;
}

string Phuongtien::getmauxe() {
	return mauxe;
}

void Phuongtien::SetInfo() {
	cout << "NHAP THONG TIN PHUONG TIEN: " << endl;
	cout << "nhap ID: ";
	cin.ignore();
	getline(cin, ID);

	cout << "nhap hang xe: ";
	getline(cin, hangxe);

	cout << "nhap nam san xuat: ";
	cin >> namsx;

	cout << "nhap gia ban: ";
	cin.ignore();
	getline(cin, giaban);

	cout << "nhap mau xe: ";
	getline(cin, mauxe);
}

void Phuongtien::Print() {
	cout << "THONG TIN PHUONG TIEN: " << endl;
	cout << "ID: " << ID << endl;
	cout << "hang xe: " << hangxe << endl;
	cout << "nam sx: " << namsx << endl;
	cout << "mau xe: " << mauxe << endl;
}