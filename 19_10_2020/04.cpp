#include<iostream>
using namespace std;

void ucgenBastir(int);
int main() {
	ucgenBastir(5);
	ucgenBastir(5);
	ucgenBastir(8);
	ucgenBastir(6);

	system("pause");
}

void ucgenBastir(int yukseklik) {
	for (int i = 1; i <= yukseklik; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}