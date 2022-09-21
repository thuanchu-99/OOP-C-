#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<memory>
#include<exception>

using namespace std;

struct Date {

	int day;
	int morth;
	int year;
};

bool checkname(string);
bool checkphone(string);
bool checkdate(Date);
bool checkmail(string);

class Exception :public exception {
	string cont;
public:
	Exception(string scont) {
		cont = scont;
	}
	string what() {
		return cont;
	}
};