#include<iostream>
using namespace std;

int main() {
	int a = 5, b = 3, sonuc;
	sonuc = (++a) * (b--);
	cout << "Sonuc -> " << sonuc << endl;
	cout << "a -> " << a << endl;
	cout << "b -> " << b << endl;

	system("pause");
}