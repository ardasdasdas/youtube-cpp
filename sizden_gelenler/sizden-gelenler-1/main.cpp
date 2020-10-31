#include<iostream>
#include"student.h"
using namespace std;

int main() {
	student ogrenci1("1008", 21);
	ogrenci1.ekranaYazdir();

	cout << "*************" << endl;
	ogrenci1.setOgrNo("1893");
	ogrenci1.ekranaYazdir();

	cout << "***************" << endl;
	cout << "Ogrenci1 yas: " << ogrenci1.getYas() << endl;
	system("pause");
}