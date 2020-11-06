#include<iostream>
using namespace std;

int faktoriyel(int);
int main() {
	int sonuc = faktoriyel(5);
	cout << sonuc << endl;

	system("pause");
}
int faktoriyel(int x) {
	if (x == 1) {
		return 1;
	}
	if (x > 1) {
		return x * faktoriyel(x - 1);
		// 4! = 4*3!
		// 3! = 3*2!
		// 2! = 2*1!
	}
}