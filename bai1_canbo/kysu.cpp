#include"canbo.h"

//KYSU definition
KYSU::KYSU() :CANBO() {
	NGANH = "";
}

KYSU::~KYSU() {
}

void KYSU::SetInfo() {
	CANBO::SetInfo();
	cout << "NGANH: ";
	getline(cin, NGANH);
}

void KYSU::Print() {
	CANBO::Print();
	cout << "NGANH: " << NGANH << endl;
}