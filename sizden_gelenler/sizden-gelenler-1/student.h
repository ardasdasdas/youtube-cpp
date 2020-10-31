#pragma once
#include<iostream>
using namespace std;
class student
{
private:
	string ogrNo;
	int yas;
public:
	student(string, int);
	~student();
	void setOgrNo(string);
	string getOgrNo();
	void setYas(int);
	int getYas();
	void ekranaYazdir();
};

