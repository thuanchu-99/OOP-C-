#pragma once
#include"student.h"
#include"normalstudent.h"
#include"goodstudent.h"

class Quanly {
private:
	vector<shared_ptr<Student>> List;
public:
	Quanly();
	~Quanly();
	void ADD();
	void SHOW();
	void arrange_gs(int&, vector<int>&);
	void arrange_ns(int&, vector<int>&);
	void RECRUIT();
};

