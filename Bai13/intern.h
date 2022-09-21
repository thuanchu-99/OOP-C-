#pragma once
#include"employee.h"

class Intern :public Employee {
private:
	string major;
	int semester;
	string uni_name2;
public:
	Intern();
	~Intern();
	void SetInfo(string);
	void Print();
	int gettype();
};