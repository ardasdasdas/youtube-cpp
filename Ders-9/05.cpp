#include<iostream>
using namespace std;
int ustAl(int, int);
int main() {
	int sayi, ust, sonuc;
	cout << "Bir tam sayi girin: ";
	cin >> sayi;
	cout << "Ustu girin: ";
	cin >> ust;
	sonuc = ustAl(sayi, ust);
	cout << "Sonuc: " << sonuc << endl;

	system("pause");
}
int ustAl(int sayi, int ust) {
	int sonuc = 1;
	for (int i = 0; i < ust; i++) {
		sonuc *= sayi;
	}
	return sonuc;
}
