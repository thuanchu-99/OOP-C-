#include"thisinh.h"

//KHOIA definition
KHOIA::KHOIA() :THISINH() {
}
KHOIA::~KHOIA() {
}
void KHOIA::Print() {
	THISINH::Print();
	cout << "TO HOP MON THI: " << this->TOHOP << endl;
}

