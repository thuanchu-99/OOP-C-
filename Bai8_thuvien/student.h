#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Student {
private:
	string hoten;
	int age;
	string lop;
public:
	Student();
	virtual ~Student();
	virtual void set();
	virtual void show();
};

struct Date {
	int day;
	int morth;
	int year;
};

class Card :public Student {
private:
	string maphieu;
	Date ngaymuon;
	Date ngaytra;
	string sohieusach;
public:
	Card();
	~Card();
	void set();
	void show();
	string getmp();
};
