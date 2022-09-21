#pragma once
#include"lib.h"

using namespace std;

class Certificate {
private:
	string ID;
	string name;
	string rank;
	Date datecer;

public:
	Certificate();
	~Certificate();
	void SetCer();
	void PrintCer();
};