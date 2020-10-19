#include<iostream>
using namespace std;
// faktoriyel fonksiyonu
int faktoriyel(int);
int main() {
	cout << faktoriyel(4) << endl;
	
	system("pause");
}
int faktoriyel(int sayi) {
	int sonuc = 1;
	for (int i = 1; i <= sayi; i++) {
		sonuc *= i;
	}
	return sonuc;
}
