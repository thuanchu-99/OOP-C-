#pragma once
#include"employee.h"

class Fresher : public Employee {
private:
	Date gradate;
	string grarank;
	string uni_name1;
public:
	Fresher();
	~Fresher();
	void SetInfo(string);
	void Print();
	int gettype();
};