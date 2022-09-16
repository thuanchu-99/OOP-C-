#pragma once

#include<iostream>
#include<string>
#include<stdio.h>
#include<vector>

using namespace std;

class CANBO {
private:
	int TUOI;
	string GIOITINH;
	string DIACHI;
	string HOTEN;
public:
	CANBO();
	virtual ~CANBO();
	virtual void Print();
	virtual void SetInfo();
	string getHOTEN();
};

class CONGNHAN : public CANBO {
private:
	int BAC; //1 -> 10
public:
	CONGNHAN();
	~CONGNHAN();
	void Print();

	void SetInfo();
};

class KYSU : public CANBO {
private:
	string NGANH;
public:
	KYSU();
	~KYSU();
	void Print();
	void SetInfo();
};

class NHANVIEN : public CANBO {
private:
	string CONGVIEC;
public:
	NHANVIEN();
	~NHANVIEN();
	void Print();
	void SetInfo();
};
