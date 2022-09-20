#include"resident.h"

int main() {
	resident a;
	int opt;

	while (true) {

		cout << "MENU" << endl;
		cout << "1: them ho gia dinh." << endl;
		cout << "2: hien thi danh sach ho gia dinh." << endl;
		cout << "3: exit" << endl;
		cout << "nhap lua chon: ";
		
		while (true) {
			cin >> opt;
			if (opt < 1 || opt > 3) {
				cout << "chi cho phep nhap 1 2 3." << endl;
				cout << "nhap lai: ";
			}
			else
				break;
		}

		if (opt == 3)
			break;

		switch (opt)
		{
		case 1:
			a.add();
			break;
		case 2:
			a.showresident();
		default:
			break;
		}
	}
	cout << "KET THUC CHUONG TRINH!" << endl;
	return 0;
}