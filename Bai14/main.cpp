#include"quanly.h"

int main() {
	Quanly list;
	int choose;

	while (true)
	{
		cout << "MENU TUYEN DUNG NHAN VIEN:" << endl;
		cout << "1: ADD." << endl;
		cout << "2: SHOW." << endl;
		cout << "3: CHOOSE." << endl;
		cout << "4: EXIT." << endl;
		cout << "nhap choose: ";
		while (true) {
			cin >> choose;
			cout << endl;

			if (choose < 1 || choose>4) {
				cout << "chi duoc phep chon 1 -> 4. " << endl;
				cout << "nhap choose: ";
			}
			else
				break;
		}

		if (choose == 4)
			break;

		switch (choose)
		{
		case 1:
			list.ADD();
			break;
		case 2:
			list.SHOW();
			break;
		case 3:
			list.RECRUIT();
			break;
		default:
			break;
		}
	}
	cout << "KET THUC CHUONG TRINH!!!" << endl;

	return 0;
}