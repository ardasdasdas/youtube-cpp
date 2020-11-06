#include<iostream>
using namespace std;

bool esitMi(int, int);
bool esitMi(float, float);
bool esitMi(char, char);

int main() {
	char ch = 'A';
	float deneme = 2.89;
	cout << esitMi(1, 1) << endl;
	cout << esitMi(deneme, 2.89) << endl;
	cout << esitMi(ch, 'a') << endl;
	// ASCII TABLE
	system("pause");
}
bool esitMi(int sayi1, int sayi2) {
	if (sayi1 == sayi2) {
		return true;
	}
	return false;
}
bool esitMi(float sayi1, float sayi2) {
	if (sayi1 == sayi2) {
		return true;
	}
	return false;
}
bool esitMi(char karakter1, char karakter2) {
	if (karakter1 == karakter2) {
		return true;
	}
	return false;
}