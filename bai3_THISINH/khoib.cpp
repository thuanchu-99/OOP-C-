#include"thisinh.h"

//KHOIB definition
KHOIB::KHOIB() :THISINH() {
}
KHOIB::~KHOIB() {
}
void KHOIB::Print() {
	THISINH::Print();
	cout << "TO HOP MON THI: " << this->TOHOP << endl;
}