#pragma once
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Phuongtien {
private:
	string ID;
	string hangxe;
	int namsx;
	string giaban;
	string mauxe;
public:
	string getID();
	Phuongtien();
	virtual ~Phuongtien();
	virtual void SetInfo();
	virtual void Print();
	string getmauxe();
	string gethangxe();
};

class Oto :public Phuongtien {
private:
	int socho;
	string kieudongco;
public:
	Oto();
	~Oto();
	void SetInfo();
	void Print();
};

class Xetai :public Phuongtien {
private:
	string trongtai;
public:
	Xetai();
	~Xetai();
	void SetInfo();
	void Print();
};

class Xemay :public Phuongtien {
private:
	string congsuat;
public:
	Xemay();
	~Xemay();
	void SetInfo();
	void Print();
};