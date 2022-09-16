#include"thisinh.h"
#include"tuyensinh.h"

int main() {
	TUYENSINH list;
	int key;
	do {
		cout << "MENU QUAN LY THI SINH:" << endl;
		cout << "1: THEM THI SINH." << endl;
		cout << "2: HIEN THI DANH SACH THI SINH." << endl;
		cout << "3: TIM KIEM THI SINH THEO MA THI SINH." << endl;
		cout << "4: THOAT CHUONG TRINH." << endl;

		cout << "nhap key: ";
		while (true) {
			cin >> key;
			if (key < 1 || key > 4) {
				cout << "chi cho phep nhap 1 2 3 4." << endl;
				cout << "nhap lai: ";
			}
			else
				break;
		}

		switch (key)
		{
		case 1:
			list.ADD();
			break;
		case 2:
			list.SHOW();
			break;
		case 3:
			list.FIND();
			break;
		default:
			break;
		}
	} while (key != 4);

	cout << "\nCHUONG TRINH KET THUC!!!" << endl;

	return 0;
}