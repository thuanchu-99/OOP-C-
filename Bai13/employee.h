#pragma once
#include"lib.h"
#include"cetificate.h"

class Employee {
protected:
	string ID;
	string fullname;
	string phone;
	string email;
	Date birthday;
	vector<Certificate> Cer;
public:
	Employee();
	virtual ~Employee();
	virtual void SetInfo(string);
	virtual void Print();
	string getID();
	void Set_certificate();
	void Show_certificate();
	virtual int gettype() = 0;
};
