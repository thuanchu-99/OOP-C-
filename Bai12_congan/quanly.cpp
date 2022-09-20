#include"quanly.h"

//Quanly definition

Quanly::Quanly(){}

Quanly::~Quanly() {
	for (int i = 0; i < List.size(); i++)
	{
		delete List[i];
	}
	List.clear();
}

void Quanly::ADD() {
	int choose;
	do {
		cout << "\nCHON LOAI PHUONG TIEN NHAP VAO:" << endl;
		cout << "1: OTO." << endl;
		cout << "2: XE TAI." << endl;
		cout << "3: XE MAY." << endl;
		cout << "4: THOAT KHOI INPUT." << endl;
		cout << "nhan chon: ";

		while (true) {
			cin >> choose;
			if (choose < 1 || choose > 4) {
				cout << "chi cho phep nhap 1 2 3 4." << endl;
				cout << "nhap lai: ";
			}
			else
				break;
		}

		switch (choose)
		{
		case 1:
			List.push_back(new Oto);
			List[List.size() - 1]->SetInfo();
			break;
		case 2:
			List.push_back(new Xetai);
			List[List.size() - 1]->SetInfo();
			break;
		case 3:
			List.push_back(new Xemay);
			List[List.size() - 1]->SetInfo();
			break;
		default:
			break;
		}
	} while (choose != 4);
}

void Quanly::SHOW() {
	cout << "\nDANH SACH PHUONG TIEN:" << endl;
	for (int i = 0; i < List.size(); i++) {
		cout << "PHUONG TIEN " << i + 1 << ":" << endl;
		List[i]->Print();
		cout << endl;
	}
	cout << "------------------------------\n";
}

void Quanly::FIND() {
	string ten;
	cout << "NHAP TEN HANG TIM: ";
	cin.ignore();
	getline(cin, ten);

	string mau;
	cout << "NHAP MAU TIM: ";
	getline(cin, mau);

	cout << "DANH SACH THONG TIN CAN BO TIM DUOC : " << endl;
	int num = 0;
	for (int i = 0; i < List.size(); i++) {
		if (List[i]->gethangxe() == ten && List[i]->getmauxe() == mau) {

			List[i]->Print();
			cout << endl;
			num = 1;
		}
	}
	if (num == 0)
		cout << "khong tim thay phuong tien phu hop!" << endl;
	cout << "------------------------------\n";
}

void Quanly::DELETE() {
	string matl;
	cout << "NHAP MA ID PHUONG TIEN CAN XOA: ";
	cin.ignore();
	getline(cin, matl);
	for (int i = 0; i < List.size(); i++) {
		if (List[i]->getID() == matl) {
			List.erase(List.begin() + i);
		}
	}
	cout << "\n------------------------------\n";
}