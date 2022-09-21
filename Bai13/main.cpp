#include"employee.h"
#include"quanly.h"

int main() {
	Quanly list;
	int key;
	do {
		cout << "MENU QUAN TAI LIEU:" << endl;
		cout << "1: THEM NHAN VIEN." << endl;
		cout << "2: HIEN THI DANH SACH NHAN VIEN." << endl;
		cout << "3: TIM KIEM NHAN VIEN THEO MA ID." << endl;
		cout << "4: XOA NHAN VIEN THEO MA ID." << endl;
		cout << "5: THOAT CHUONG TRINH." << endl;
		cout << "nhap key: ";

		while (true) {
			cin >> key;
			if (key < 1 || key > 5) {
				cout << "chi cho phep nhap 1 2 3 4 5." << endl;
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
		{
			int key;
			while (true) {
				cout << "MENU SHOW DANH SACH NHAN VIEN:" << endl;
				cout << "1: show all." << endl;
				cout << "2: show experience." << endl;
				cout << "3: show fresher." << endl;
				cout << "4: show intern." << endl;
				cout << "5: thoat khoi chuong SHOW." << endl;
				cout << "nhap key: ";

				while (true) {
					cin >> key;
					if (key < 1 || key > 5) {
						cout << "chi cho phep nhap 1 2 3 4 5." << endl;
						cout << "nhap lai: ";
					}
					else
						break;
				}
				if (key == 5)
					break;

				switch (key)
				{
				case 1:
					list.SHOWALL();
					break;
				case 2:
					list.SHOWEX();
					break;
				case 3:
					list.SHOWFR();
					break;
				case 4:
					list.SHOWIN();
					break;
				default:
					break;
				}
			}
		}
		case 3:
			list.FIND();
			break;
		case 4:
			list.DELETE();
		default:
			break;
		}
	} while (key != 5);

	cout << "\nCHUONG TRINH KET THUC!!!" << endl;

	return 0;
}