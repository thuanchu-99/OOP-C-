#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class person {
private:
	string hoten;
	int age;
	string nghenghiep;
	string CCCD;
public:
	person();
	virtual ~person();
	void setinfo();
	void show();
	string getCCCD();
};

