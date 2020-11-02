#include<iostream>
using namespace std;

int main() {
	int a = 0, b = 2, c;
	c = b * (++a);
	cout << "a -> " << a << endl;
	cout << "b -> " << b << endl;
	cout << "c -> " << c << endl;
	cout << " ----------------------------------- " << endl;
	a = 0, b = 2, c;
	cout << " islemden once " << endl;
	cout << "a -> " << a << endl;
	cout << "b -> " << b << endl;
	cout << "c -> " << c << endl;
	c = b * (a++);
	cout << " islemden sonra " << endl;

	cout << "a -> " << a << endl;
	cout << "b -> " << b << endl;
	cout << "c -> " << c << endl;

	system("pause");
}