#include"phuongtien.h"

//Xetai definition
Xetai::Xetai() :Phuongtien() {
	trongtai = "";
}

Xetai::~Xetai(){}

void Xetai::SetInfo() {
	Phuongtien::SetInfo();
	cout << "nhpa trong tai cua xe: ";
	getline(cin, trongtai);
}

void Xetai::Print() {
	Phuongtien::Print();
	cout << "trong tai cua xe: " << trongtai << endl;
}