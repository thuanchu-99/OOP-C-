#pragma once
#include"phuongtien.h"

class Quanly {
private:
	vector<Phuongtien*> List;
public:
	Quanly();
	~Quanly();
	void ADD();
	void DELETE();
	void FIND();
	void SHOW();
};