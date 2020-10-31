#include<iostream>
using namespace std;

int main() {

	int sayilar[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> sayilar[i];
	}
	cout << "******************" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << sayilar[i] << endl;
	}

	system("pause");
}