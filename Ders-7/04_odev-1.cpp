#include<iostream>
using namespace std;
//4 - Basamak say�lar� kadar y�ld�z bast�rma
/*
Girilen Say� -> 5862

��kt�:
*****
********
******
**

*/
int main() {
	int sayi, basamak, sayac = 0, bosEleman1, bosEleman2;
	cout << "sayi gir: ";
	cin >> sayi;
	bosEleman1 = sayi;

	while (bosEleman1 != 0)
	{
		bosEleman1 /= 10;
		sayac++;
	}
	for (int i = sayac; i > 0; i--)
	{
		basamak = pow(10, i - 1); // pow ust alma islemini yapar 10^4 gibi
		bosEleman2 = sayi / basamak;
		sayi %= basamak;
		for (int j = 0; j < bosEleman2; j++)
			cout << "*";
		cout << endl;
	}

	system("pause");
}