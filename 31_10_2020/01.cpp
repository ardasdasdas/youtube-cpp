#include<iostream>
using namespace std;

int main() {

	int sayilar[5];

	sayilar[0] = 2;
	sayilar[1] = 5;
	sayilar[2] = 7;
	sayilar[3] = 8;
	sayilar[4] = 3;

	for (int i = 0; i < 5; i++)
	{
		cout << sayilar[i] << endl;
	}

	system("pause");
}