#include<iostream>
using namespace std;
// f(x) = x^2
int karesi(int);
int main() {

	int sonuc, x;
	cout << "Bir sayi girin: ";
	cin >> x;
	sonuc = karesi(x);

	cout << sonuc << endl;

	system("pause");
}

int karesi(int x) {
	int sonuc = x * x;
	return sonuc;
}