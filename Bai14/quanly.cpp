#include"quanly.h"

Quanly::Quanly() {}
Quanly::~Quanly() {}

void Quanly::ADD() {
	int sum;
	cout << "\nnhap so luong sinh vien dang ky: ";
	cin >> sum;

	int a;
	for (int i = 0; i < sum; i++) {
		cout << "\nTHEM SINH VIEN:" << endl;
		cout << "1:good student." << endl;
		cout << "2: normal student" << endl;
		cout << "nhap choose: ";

		while (true) {
			cin >> a;
			if (a < 1 || a>2) {
				cout << "chi duoc phep chon 1 2. " << endl;
				cout << "nhap choose: ";
			}
			else
				break;
		}
		switch (a)
		{
		case 1:
		{
			unique_ptr<Goodstudent> ex1(new Goodstudent);
			ex1->SetInfo();
			List.push_back(move(ex1));
			break;
		}
		case 2:
		{
			unique_ptr<Normalstudent> ex2(new Normalstudent);
			ex2->SetInfo();
			List.push_back(move(ex2));
			break;
		}

		default:
			break;
		}
	}
	cout << "\n------------------------------\n";
}

void Quanly::SHOW() {

	for (int i = 0; i < List.size(); i++) {
		cout << "SINH VIEN " << i + 1 << ":" << endl;
		List[i]->Print();
		cout << endl;
	}

	cout << "------------------------------\n";
}

void Quanly::arrange_gs(int& count, vector<int>& list) {
	for (int i = 0; i < List.size(); i++)
	{
		if (List[i]->gettype() == 1) {
			count++;
			list.push_back(i);
		}
	}

	for (int i = 0; i < list.size() - 1; i++) {
		for (int j = i + 1; j < list.size(); j++) {
			shared_ptr<Goodstudent> st1 = dynamic_pointer_cast<Goodstudent>(List[list[i]]);
			shared_ptr<Goodstudent> st2 = dynamic_pointer_cast<Goodstudent>(List[list[j]]);
			if (st1->getGPA() < st2->getGPA())
			{
				swap(List[list[i]], List[list[j]]);
			}
		}
	}
}

void Quanly::arrange_ns(int& count, vector<int>& list) {
	for (int i = 0; i < List.size(); i++)
	{
		if (List[i]->gettype() == 2) {
			count++;
			list.push_back(i);
		}
	}

	for (int i = 0; i < list.size() - 1; i++) {
		for (int j = i + 1; j < list.size(); j++) {
			shared_ptr<Normalstudent> st1 = dynamic_pointer_cast<Normalstudent>(List[list[i]]);
			shared_ptr<Normalstudent> st2 = dynamic_pointer_cast<Normalstudent>(List[list[j]]);
			if (st1->gettestscore() < st2->gettestscore())
			{
				swap(List[list[i]], List[list[j]]);
			}
			else if (st1->gettestscore() == st2->gettestscore())
			{
				if (st1->getTOEC() < st2->getTOEC()) {
					swap(List[list[i]], List[list[j]]);
				}
			}
		}
	}
}

void Quanly::RECRUIT() {

	int s = List.size();
	int countgs = 0;
	int countns = 0;
	vector<int> listgs, listns;

	arrange_gs(countgs, listgs);

	int n;
	cout << "NHAP SO LUONG NHAN VIEN CAN TUYEN " << "(nho hon " << s << "): ";
	cin >> n;

	if (countgs >= n)
	{
		for (int i = 0; i < n; i++) {
			List[listgs[i]]->Print();
		}
	}
	else
	{
		for (int i = 0; i < countgs; i++)
		{
			List[listgs[i]]->Print();
		}
		arrange_ns(countns, listns);
		for (int i = 0; i < countns; i++)
		{
			List[listns[i]]->Print();
		}
	}
}