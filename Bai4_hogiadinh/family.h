#pragma once
#include"person.h"

class family :public person {
private:
	int sothanhvien;
	string sonha;
	vector<person*> thanhvien;
public:
	family();
	virtual ~family();
	void setfamily();
	void showfamily();
	string getsonha();
};
