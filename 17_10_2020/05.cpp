#include<iostream>
using namespace std;
/*
*
**
***
****
*****
*/
int main() {

	int sayi;
	cout << "Sayi girin: ";
	cin >> sayi;

	for (int i = 1; i <= sayi; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	system("pause");
}