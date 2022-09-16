#include"canbo.h"

// CANBO definition
CANBO::CANBO() {
	TUOI = 0;
	GIOITINH = DIACHI = HOTEN = "";

}

CANBO :: ~CANBO() {
}

void CANBO::Print() {
	cout << "HO TEN: " << HOTEN << endl;
	cout << "TUOI: " << TUOI << endl;
	cout << "GIOI TINH: " << GIOITINH << endl;
	cout << "DIA CHI: " << DIACHI << endl;
}

void CANBO::SetInfo() {
	cout << "\nNHAP THONG TIN" << endl;
	cout << "HO TEN: ";
	cin.ignore();
	getline(cin, HOTEN);
	cout << "TUOI: "; 
	cin >> TUOI;
	cout << "GIOI TINH: "; 
	cin.ignore(); 
	getline(cin, GIOITINH);
	cout << "DIA CHI: "; 
	getline(cin, DIACHI);
}

string CANBO::getHOTEN() {
	return HOTEN;
}