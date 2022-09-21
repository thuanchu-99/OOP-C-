#pragma once
#include"employee.h"

class Experience : public Employee {
private:
	int yearex;
	string proskill;
public:
	Experience();
	~Experience();
	void SetInfo(string);
	void Print();
	int gettype();
};