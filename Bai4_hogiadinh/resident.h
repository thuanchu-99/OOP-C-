#pragma once
#include"family.h"

class resident :public family {
private:
	vector<family*> road;
public:
	resident();
	~resident();
	void add();
	void showresident();
};
