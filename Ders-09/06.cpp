#include<iostream>
using namespace std;
// gecme notu 40
char gectiMiKaldiMi(float, float);
int main() {

	char sonuc = gectiMiKaldiMi(40, 50);
	if (sonuc == 'K') {
		cout << "Kaldiniz!" << endl;
	}
	else if (sonuc == 'G') {
		cout << "Tebrikler gectiniz!" << endl;
	}

	system("pause");
}
char gectiMiKaldiMi(float vizeNotu, float finalNotu) {
	float ort = (vizeNotu + finalNotu) / 2;
	if (ort < 40 && ort > 0) {
		return 'K';
	}
	else if (ort >= 40 && ort <= 100) {
		return 'G';
	}
}

