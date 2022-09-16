#include"canbo.h"

// CONGNHAN definition
CONGNHAN::CONGNHAN() :CANBO() {
	BAC = 0;
}

CONGNHAN :: ~CONGNHAN() {
}

void CONGNHAN::Print() {
	CANBO::Print();
	cout << "CAP BAC: " << BAC << endl;
}

void CONGNHAN::SetInfo() {
	CANBO::SetInfo();
	cout << "CAP BAC:";
	cin >> BAC;
}