#include<iostream>
using namespace std;
// 1- Faktoriyel hesabý
// 5! = 5*4*3*2*1
int main() {
	int sayi, faktoriyelSonuc = 1;
	cout << "Bir sayi girin: ";
	cin >> sayi;
	for (int i = 1; i <= sayi; i++) {
		faktoriyelSonuc *= i; 
	}
	cout << sayi << "! = " << faktoriyelSonuc << endl;
	
	system("pause");
}