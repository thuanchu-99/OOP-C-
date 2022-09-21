#pragma once
#include"student.h"

class Goodstudent :public Student {
protected:
	double GPA;
	string bestreward;
public:
	Goodstudent();
	~Goodstudent();
	void SetInfo();
	void Print();
	double getGPA();
	int gettype();
};

