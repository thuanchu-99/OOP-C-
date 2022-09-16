#pragma once

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class THISINH {
private:
	string SOBAODANH;
	string HOTEN;
	string DIACHI;
	string MUCUUTIEN;
public:
	THISINH();
	virtual ~THISINH();
	virtual void Print();
	void SetInfo();
	string getSBD();

};

class KHOIA : public THISINH {
private:
	string TOHOP = "TOAN-LY-HOA";
public:
	KHOIA();
	~KHOIA();
	void Print();
};

class KHOIB : public THISINH {
private:
	string TOHOP = "TOAN-HOA-SINH";
public:
	KHOIB();
	~KHOIB();
	void Print();
};

class KHOIC : public THISINH {
private:
	string TOHOP = "VAN-SU-DIA";
public:
	KHOIC();
	~KHOIC();
	void Print();
};