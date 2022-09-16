#include"quanlytailieu.h"

//QUANLYSACH definition
void QUANLYSACH::ADD() {
	int choose;
	while(true) {
		cout << "\nCHON LOAI TAI LIEU CAN NHAP VAO: " << endl;
		cout << "1: TAP CHI." << endl;
		cout << "2: BAO." << endl;
		cout << "3: SACH." << endl;
		cout << "4: THOA KHOI INPUT." << endl;
		cout << "nhap chon: ";
		while (true) {
			cin >> choose;
			if (choose < 1 || choose > 4) {
				cout << "chi cho phep nhap 1 2 3 4." << endl;
				cout << "nhap lai: ";
			}
			else
				break;
		}
		if (choose == 4)
			break;

		string matl;
		cin.ignore();
		while (true) {
			cout << "\nDIEN THONG TIN TAI LIEU" << endl;
			cout << "NHAP MA TAI LIEU: ";
			int count = 0;
			getline(cin, matl);

			for (int i = 0; i < List.size(); i++) {
				if (List[i]->getMATL() == matl) {
					count = 1;
					cout << "MA TAI LIEU KHONG HOP LE." << endl;
					cout << "YEU CAU NHAP LAI." << endl;
					break;
				}
			}
			if (count == 0)
				break;
		}
		

		switch (choose)
		{
		case 1:
			List.push_back(new TAPCHI);
			List[List.size() - 1]->SetInfo(matl);
			break;
		case 2:
			List.push_back(new BAO);
			List[List.size() - 1]->SetInfo(matl);
			break;
		case 3:
			List.push_back(new BOOK);
			List[List.size() - 1]->SetInfo(matl);
		default:
			break;
		}
	}
	cout << "------------------------------\n";
}

void QUANLYSACH::DELETE() {
	string matl;
	cout << "NHAP MA TAI LIEU CAN XOA: ";
	cin.ignore();
	getline(cin, matl);
	for (int i = 0; i < List.size(); i++) {
		if (List[i]->getMATL() == matl) {
			List.erase(List.begin() + i);
		}
	}
	cout << "\n------------------------------\n";
}

void QUANLYSACH::SHOW() {
	cout << "DANH SACH TAI LIEU:" << endl;
	for (int i = 0; i < List.size(); i++) {
		cout << "TAI LIEU " << i + 1 << ":" << endl;
		List[i]->Print();
		cout << endl;
	}
	cout << "------------------------------\n";
}

void QUANLYSACH::FIND() {
	string matl;
	cout << "NHAP MA TAI LIEU CAN TIM: ";
	cin.ignore();
	getline(cin, matl);

	cout << "DANH SACH THONG TIN TAI LIEU TIM DUOC " << matl << " :" << endl;
	int num = 0;
	for (int i = 0; i < List.size(); i++) {
		if (List[i]->getMATL() == matl) {
			List[i]->Print();
			cout << endl;
			num = 1;
		}
	}
	if (num == 0)
		cout << "khong tim thay tai lieu!!!" << endl;
	cout << "------------------------------\n";
}

QUANLYSACH::QUANLYSACH(){}
QUANLYSACH::~QUANLYSACH() {
	for (int j = 0; j < List.size(); j++) {
		delete List[j];
	}
	List.clear();
}