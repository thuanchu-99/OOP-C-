#pragma once
#include<vector>
#include"student.h"

class Quanly {
private:
	vector<Card*> List;
public:
	Quanly();
	~Quanly();
	void ADD();
	void DELETE();
	void SHOW();
};
