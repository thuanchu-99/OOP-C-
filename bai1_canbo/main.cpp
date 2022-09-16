#include"canbo.h"
#include"qlcb.h"

int main() {
	QLCB list;
	int key;
	do {
		cout << "MENU QUAN LY CAN BO:" << endl;
		cout << "1: THEM CAN BO." << endl;
		cout << "2: HIEN THI DANH SACH CAN BO." << endl;
		cout << "3: TIM KIEM CAN BO THEO TEN." << endl;
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