#include"phuongtien.h"
#include"quanly.h"

int main() {
	Quanly list;
	int key;
	do {
		cout << "MENU QUAN LY PHUONG TIEN:" << endl;
		cout << "1: THEM PHUONG TIEN." << endl;
		cout << "2: HIEN THI DANH SACH PHUONG TIEN." << endl;
		cout << "3: TIM KIEM PHUONG TIEN THEO HANG VA MAU." << endl;
		cout << "4: XOA PHUONG TIEN THEO MA PHUONG TIEN." << endl;
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
			list.SHOW();
			break;
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