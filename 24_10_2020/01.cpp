#include<iostream>
using namespace std;
// f(0) = 2
// f(x) = f(x-1) + 2
// f(4) = ?
int f(int);
int main(){
	int sonuc;
	for (int i = 0; i <= 4; i++)
	{
		sonuc = f(i);
		cout << i <<" icin sonuc: " << sonuc << endl;;
	}

	system("pause");
}
int f(int x) {
	if (x == 0)	{
		return 2;
	}
	return f(x - 1) + 2;
}