#pragma once
#include"employee.h"

class Quanly {
private:
	vector<unique_ptr<Employee>> List;
public:
	Quanly();
	void ADD();
	void FIND();
	void DELETE();
	void SHOWALL();
	void SHOWEX();//xuat toan bo experience
	void SHOWFR();//xuat toan bo fresher
	void SHOWIN();//xuat toan bo intern
};
