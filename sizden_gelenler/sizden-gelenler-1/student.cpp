#include "student.h"

student::student(string _ogrNo, int _yas) {
	ogrNo = _ogrNo;
	yas = _yas;
}
student::~student() {

}
string student::getOgrNo() {
	return ogrNo;
}
void student::setOgrNo(string _ogrNo) {
	ogrNo = _ogrNo;
}
void student::setYas(int _yas) {
	yas = _yas;
}
int student::getYas() {
	return yas;
}

void student::ekranaYazdir()
{
	cout << "Ogrenci no: " << ogrNo << endl << "Yas: " << yas << endl;
}
