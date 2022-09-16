#pragma once

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class TAILIEU {
private:
	string MATL; //khong trung nhau
	string TENNXB;
	string BANPH;
public:
	TAILIEU();
	virtual ~TAILIEU();
	virtual void Print();
	string getMATL();
	virtual void SetInfo(string);
};

class BOOK : public TAILIEU {
private:
	string TACGIA;
	int SOTRANG;
public:
	BOOK();
	~BOOK();
	void Print();
	void SetInfo(string);
};

class TAPCHI : public TAILIEU {
private:
	string SOPH;
	string THANG;
public:
	TAPCHI();
	~TAPCHI();
	void Print();
	void SetInfo(string);
};

class BAO : public TAILIEU {
private:
	string NGAY;
public:
	BAO();
	~BAO();
	void Print();
	void SetInfo(string);
};

