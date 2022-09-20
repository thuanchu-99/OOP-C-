#include"quanly.h"

Quanly::Quanly(){}

Quanly::~Quanly() {
	for (int i = 0; i < List.size(); i++) {
		delete List[i];
	}
	List.clear();
}

void Quanly::ADD() {
	List.push_back(new Card);
	List[List.size() - 1]->set();
	cout << "------------------------------\n";
}

void Quanly::DELETE() {
	string matl;
	cin.ignore();
	cout << "NHAP MA PHIEU CAN XOA: ";
	getline(cin, matl);
	for (int i = 0; i < List.size(); i++) {
		if (List[i]->getmp() == matl) {
			List.erase(List.begin() + i);
		}
	}
	cout << "\n------------------------------\n";
}

void Quanly::SHOW() {
	cout << "DANH SACH PHIEU:" << endl;
	for (int i = 0; i < List.size(); i++) {
		cout << "TAI LIEU " << i + 1 << ":" << endl;
		List[i]->show();
		cout << endl;
	}
	cout << "------------------------------\n";
}