#include"employee.h"
#include"experience.h"
#include"fresher.h"
#include"intern.h"
#include"quanly.h"

//Quanly definition
Quanly::Quanly() {}

void Quanly::ADD() {
	int c;
	while (true) {
		cout << "\nTHEM NHAN VIEN:" << endl;
		cout << "1: experience." << endl;
		cout << "2: fresher." << endl;
		cout << "3: intern." << endl;
		cout << "4: exit." << endl;

		cout << "nhap choose: ";
		cin >> c;

		while (c < 1 || c>4) {
			cout << "chi duoc phep nhap 1 2 3 4." << endl;
			cout << "nhap lai: ";
			cin >> c;
		}
		if (c == 4)
			break;

		string id;
		cin.ignore();
		while (true) {
			cout << "\nDIEN THONG TIN NHAN VIEN: " << endl;
			cout << "NHAP MA ID: ";
			int count = 0;
			getline(cin, id);

			for (int i = 0; i < List.size(); i++) {
				if (List[i]->getID() == id) {
					count = 1;
					cout << "MA TAI LIEU KHONG HOP LE." << endl;
					cout << "YEU CAU NHAP LAI." << endl;
					break;
				}
			}
			if (count == 0)
				break;
		}
		switch (c)
		{
		case 1:
		{
			unique_ptr<Experience> ex1(new Experience);
			ex1->SetInfo(id);
			List.push_back(move(ex1));
			break;
		}
		case 2:
		{
			unique_ptr<Fresher> ex2(new Fresher);
			ex2->SetInfo(id);
			List.push_back(move(ex2));
			break;
		}
		case 3:
		{
			unique_ptr<Intern> ex3(new Intern);
			ex3->SetInfo(id);
			List.push_back(move(ex3));
			break;
		}
		default:
			break;
		}
	}
	cout << "\n------------------------------\n";
}

void Quanly::DELETE() {
	string matl;
	cout << "NHAP MA NHAN VIEN CAN XOA: ";
	cin.ignore();
	getline(cin, matl);
	for (int i = 0; i < List.size(); i++) {
		if (List[i]->getID() == matl) {
			List.erase(List.begin() + i);
		}
	}
	cout << "\n------------------------------\n";
}

void Quanly::FIND() {
	string matl;
	cout << "NHAP MA ID NHAN VIEN CAN TIM: ";
	cin.ignore();
	getline(cin, matl);

	cout << "DANH SACH THONG TIN NHAN VIEN TIM DUOC " << matl << " :" << endl;
	int num = 0;
	for (int i = 0; i < List.size(); i++) {
		if (List[i]->getID() == matl) {
			List[i]->Print();
			cout << endl;
			num = 1;
		}
	}
	if (num == 0)
		cout << "khong tim thay nhan vien!!!" << endl;
	cout << "------------------------------\n";
}

void Quanly::SHOWALL() {
	cout << "DANH SACH NHAN VIEN:" << endl;
	for (int i = 0; i < List.size(); i++) {
		cout << "NHAN VIEN " << i + 1 << ":" << endl;
		List[i]->Print();
		cout << endl;
	}
	cout << "------------------------------\n";
}

void Quanly::SHOWEX() {
	cout << "DANH SACH NHAN VIEN EXPERIENCE: " << endl;
	for (int i = 0; i < List.size(); i++) {
		if (List[i]->gettype() == 1) {
			cout << "NHAN VIEN " << i + 1 << ":" << endl;
			List[i]->Print();
			cout << endl;
		}
	}
}

void Quanly::SHOWFR() {
	cout << "DANH SACH NHAN VIEN FRESHER: " << endl;
	for (int i = 0; i < List.size(); i++) {
		if (List[i]->gettype() == 2) {
			cout << "NHAN VIEN " << i + 1 << ":" << endl;
			List[i]->Print();
			cout << endl;
		}
	}
}

void Quanly::SHOWIN() {
	cout << "DANH SACH NHAN VIEN INTERN: " << endl;
	for (int i = 0; i < List.size(); i++) {
		if (List[i]->gettype() == 3) {
			cout << "NHAN VIEN " << i + 1 << ":" << endl;
			List[i]->Print();
			cout << endl;
		}
	}
}