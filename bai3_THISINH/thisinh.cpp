#include"thisinh.h"

//THISINH definition
THISINH::THISINH() {
	SOBAODANH = HOTEN = DIACHI = MUCUUTIEN = "";
}

THISINH::~THISINH() {
}

string THISINH::getSBD() {
	return SOBAODANH;
}

void THISINH::Print() {
	cout << "THONG TIN THI SINH: " << endl;
	cout << "SO BAO DANH: " << SOBAODANH << endl;
	cout << "HO VA TEN: " << HOTEN << endl;
	cout << "DIA CHI: " << DIACHI << endl;
	cout << "MUC UU TIEN: " << MUCUUTIEN << endl;
}

void THISINH::SetInfo() {
	cout << "\nNHAP THONG TIN THI SINH DU THI:" << endl;
	cout << "SO BAO DANH: ";
	cin.ignore();
	getline(cin, SOBAODANH);
	cout << "HO VA TEN: ";
	getline(cin, HOTEN);
	cout << "DIA CHI: ";
	getline(cin, DIACHI);
	cout << "MUC UU TIEN: ";
	getline(cin, MUCUUTIEN);
}
