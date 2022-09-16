#include"qlcb.h"

//QLCB definition
void QLCB::ADD() {
	int choose;
	do {
		cout << "\nCHON LOAI CAN BO NHAP VAO:" << endl;
		cout << "1: CONG NHAN." << endl;
		cout << "2: KYSU." << endl;
		cout << "3: NHAN VIEN" << endl;
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
			List.push_back(new CONGNHAN);
			List[List.size() - 1]->SetInfo();
			break;
		case 2:
			List.push_back(new KYSU);
			List[List.size() - 1]->SetInfo();
			break;
		case 3:
			List.push_back(new NHANVIEN);
			List[List.size() - 1]->SetInfo();
			break;
		default:
			break;
		}
	} while (choose != 4);
}

void QLCB::SHOW() {
	cout << "\nDANH SACH CAN BO:" << endl;
	for (int i = 0; i < List.size(); i++) {
		cout << "CAN BO " << i+1 << ":" << endl;
		List[i]->Print();
		cout << endl;
	}
	cout << "------------------------------\n";
}

void QLCB::FIND() {
	string ten;
	cout << "NHAP TEN CAN BO CAN TIM: ";
	cin.ignore();
	getline(cin, ten);

	cout << "DANH SACH THONG TIN CAN BO TIM DUOC THEO TEN " << ten << " :" << endl;
	int num = 0;
	for (int i = 0; i < List.size(); i++) {
		if (List[i]->getHOTEN() == ten) {
			
			List[i]->Print();
			cout << endl;
			num = 1;
		}
	}
	if (num == 0)
		cout << "khong tim thay ten can bo!" << endl;
	cout << "------------------------------\n";
}
QLCB::QLCB() {
}
QLCB::~QLCB() {
	for (int i = 0; i < List.size(); i++) {
		delete List[i];
	}
	List.clear();
}