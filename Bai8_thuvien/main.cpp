#include"quanly.h"

int main() {
	Quanly a;
	int opt;

	while (true) {

		cout << "MENU" << endl;
		cout << "1: them phieu." << endl;
		cout << "2: hien thi danh sach phieu." << endl;
		cout << "3: delete phieu theo ma phieu." << endl;
		cout << "4: exit" << endl;
		cout << "nhap lua chon: ";

		while (true) {
			cin >> opt;
			if (opt < 1 || opt > 4) {
				cout << "chi cho phep nhap 1 2 3 4." << endl;
				cout << "nhap lai: ";
			}
			else
				break;
		}

		if (opt == 4)
			break;

		switch (opt)
		{
		case 1:
			a.ADD();
			break;
		case 2:
			a.SHOW();
		case 3:
			a.DELETE();
		default:
			break;
		}
	}
	cout << "KET THUC CHUONG TRINH!" << endl;
	return 0;
}