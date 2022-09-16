#include"tailieu.h"

//BAO definition
BAO::BAO() :TAILIEU() {
	NGAY = "";
}

BAO::~BAO() {
}

void BAO::SetInfo(string a) {
	TAILIEU::SetInfo(a);
	cout << "NHAP NGAY PHAT HANH: ";
	getline(cin, NGAY);
}

void BAO::Print() {
	TAILIEU::Print();
	cout << "NGAY PHAT HANH: " << NGAY << endl;
}