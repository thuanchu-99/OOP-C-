#include"family.h"

family::family() :person() {
	sothanhvien = 0;
	sonha = "";
}

family::~family() {
	for (int j = 0; j < thanhvien.size(); j++) {
		delete thanhvien[j];
	}
	thanhvien.clear();
}

void family::setfamily() {
	cout << "NHAP THANH VIEN TRONG HO:" << endl;
	int b;

	while (true) {
		cout << "1: them thanh vien family." << endl;
		cout << "2: exit." << endl;
		cout << "nhap choose: ";

		while (true) {
			cin >> b;
			if (b < 1 || b > 2) {
				cout << "chi cho phep nhap 1 2." << endl;
				cout << "nhap lai: ";
			}
			else
				break;
		}
		if (b == 2)
			break;

		switch (b)
		{
		case 1:
			thanhvien.push_back(new person);
			thanhvien[thanhvien.size() - 1]->setinfo();
			break;
		default:
			break;
		}
	}
	cout << "------------------------------\n";
}

void family::showfamily() {

	cout << "NHAN KHAU TRONG HO GIA DINH:" << endl;

	for (int i = 0; i < thanhvien.size(); i++) {
		cout << "nhan khau " << i + 1 << ":" << endl;

		thanhvien[i]->show();
		cout << endl;
	}
	cout << "------------------------------\n";
}

string family::getsonha() {
	return sonha;
}