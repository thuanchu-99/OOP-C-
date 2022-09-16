#include"thisinh.h"

//KHOIC definition
KHOIC::KHOIC() :THISINH() {
}
KHOIC::~KHOIC() {
}
void KHOIC::Print() {
	THISINH::Print();
	cout << "TO HOP MON THI: " << this->TOHOP << endl;
}