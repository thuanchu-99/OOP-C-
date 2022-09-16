#include"tuyensinh.h"

//TUYENSINH definition
TUYENSINH::TUYENSINH(){}
TUYENSINH::~TUYENSINH() {
	for (int i = 0; i < List.size(); i++) {
		delete List[i];
	}
	List.clear();
}

void TUYENSINH::ADD() {
	int choose;
	do {
		cout << "\nCHON LOAI THI SINH NHAP VAO:" << endl;
		cout << "1: KHOI A." << endl;
		cout << "2: KHOI B." << endl;
		cout << "3: KHOI C." << endl;
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
			List.push_back(new KHOIA);
			List[List.size() - 1]->SetInfo();
			break;
		case 2:
			List.push_back(new KHOIB);
			List[List.size() - 1]->SetInfo();
			break;
		case 3:
			List.push_back(new KHOIC);
			List[List.size() - 1]->SetInfo();
			break;
		default:
			break;
		}
	} while (choose != 4);
}

void TUYENSINH::SHOW() {
	cout << "\nDANH SACH THI SINH:" << endl;
	for (int i = 0; i < List.size(); i++) {
		cout << "THI SINH " << i + 1 << ":" << endl;
		List[i]->Print();
		cout << endl;
	}
	cout << "------------------------------\n";
}

void TUYENSINH::FIND() {
	string mats;
	cout << "NHAP MA SO THI SINH CAN TIM: ";
	cin.ignore();
	getline(cin, mats);

	cout << "DANH SACH THONG TIN THI SINH TIM DUOC THEO MA " << mats << " :" << endl;
	int num = 0;
	for (int i = 0; i < List.size(); i++) {
		if (List[i]->getSBD() == mats) {
			List[i]->Print();
			num = 1;
		}
	}
	if (num == 0)
		cout << "KHONG TIM THAY THI SINH CO MA " << mats << endl;
	cout << "------------------------------\n";
}
