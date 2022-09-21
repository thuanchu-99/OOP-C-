#pragma once
#include"student.h"

class Normalstudent :public Student {
protected:
	int toeic;
	double testscore;
public:
	Normalstudent();
	~Normalstudent();
	void SetInfo();
	void Print();
	int getTOEC();
	int gettype();
	double gettestscore();
};