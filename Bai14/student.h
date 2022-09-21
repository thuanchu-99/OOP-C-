#pragma once
#include"lib.h"

class Student {
protected:
	string fullname;
	Date dob;
	string sex;
	string phonenumber;
	string uni_name;
	string gradelevel;
public:
	Student();
	virtual ~Student();
	virtual void SetInfo();
	virtual void Print();
	string getname();
	virtual int gettype() = 0;
};