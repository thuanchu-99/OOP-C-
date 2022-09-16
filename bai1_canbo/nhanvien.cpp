#include"canbo.h"

//NHANVIEN definition
NHANVIEN::NHANVIEN() :CANBO() {
	CONGVIEC = "";
}

NHANVIEN::~NHANVIEN() {
}

void NHANVIEN::SetInfo() {
	CANBO::SetInfo();
	cout << "CONG VIEC: ";
	/*cin.ignore();*/
	getline(cin, CONGVIEC);
}

void NHANVIEN::Print() {
	CANBO::Print();
	cout << "CONG VIEC: " << CONGVIEC << endl;
}
