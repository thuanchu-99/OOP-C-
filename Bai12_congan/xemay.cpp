#include"phuongtien.h"

//xemay definition
Xemay::Xemay():Phuongtien() {
	congsuat = "";
}

Xemay::~Xemay(){}

void Xemay::SetInfo() {
	Phuongtien::SetInfo();
	cout << "nhap cong suat cua xe: ";
	getline(cin, congsuat);
}

void Xemay::Print() {
	Phuongtien::Print();
	cout << "cong suat cua xe: " << congsuat << endl;
}