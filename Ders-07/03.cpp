#include<iostream>
using namespace std;
// 3- Bir sayýnýn tersten yazýlýþý
// 1234 -> 4321
// 1230 + 4
// 120 + 3
int main() {
	int sayi, sonuc = 0;
	cout << "Bir tam sayi girin: ";
	cin >> sayi;
	while (sayi != 0) {
		sonuc *= 10;
		sonuc += sayi % 10;
		sayi /= 10;
		cout << "Sonuc: " << sonuc << endl;
		cout << "Sayi: " << sayi << endl;
	}
	// 40 -> 43 -> 430 -> 432 -> 4321
	cout << "Tersten yazimi: " << sonuc << endl;
	
	system("pause");
}