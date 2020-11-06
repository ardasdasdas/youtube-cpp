#include<iostream>
using namespace std;
// f(0) = 2
// f(1) = 1
// f(x) = f(x-1) + f(x-2) - 4
// f(3) = ?
int f(int);
int main() {
	int sonuc;
	for (int i = 0; i <= 3; i++)
	{
		sonuc = f(i);
		cout << i << " icin sonuc: " << sonuc << endl;;
	}

	system("pause");
}
int f(int x) {
	if (x == 0) {
		return 2;
	}
	if (x == 1) {
		return 1;
	}
	return f(x - 1) + f(x - 2) - 4;
}