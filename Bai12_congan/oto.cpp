#include"phuongtien.h"

//oto definition
Oto::Oto() :Phuongtien() {
	socho = 0;
	kieudongco = "";
}

Oto::~Oto(){}

void Oto::SetInfo() {
	Phuongtien::SetInfo();
	cout << "nhap so luong cho ngoi: ";
	cin >> socho;
	cout << "nhap kieu dong co: ";
	cin.ignore();
	getline(cin, kieudongco);
}

void Oto::Print() {
	Phuongtien::Print();
	cout << "so luong cho ngoi: " << socho << endl;
	cout << "kieu dong co: " << kieudongco << endl;
}