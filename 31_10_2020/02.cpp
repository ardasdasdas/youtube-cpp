#include<iostream>
using namespace std;

int main() {

	int sayilar[] = { 2,3,8,7,3,4 };

	for (int i = 0; i < 6; i++)
	{
		cout << "sayilar[" << i << "] -> " << sayilar[i] << " adres " << &sayilar[i] << endl;
	}

	system("pause");
}