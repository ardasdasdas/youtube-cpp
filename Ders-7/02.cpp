#include<iostream>
using namespace std;
//2- Tav�an-Ku� sorusu 
/*Bir �iftlikte tav�an say�s� -> 38
ku� say�s�    -> 102
Her sene tav�an say�s�ndaki art�� oran� -> 0.085
Her sene ku� say�s�ndaki art�� oran� 	-> 0.077
Ka� y�l sonra tav�an say�s�, ku� say�s�n� ge�er ? (Cevap: 134)*/
#define rabbitRate 0.085
#define birdRate 0.077
int main() {
	double tavsanSayisi = 38, kusSayisi = 102, geciciEleman1, geciciEleman2;
	int yil = 0;
	geciciEleman1 = tavsanSayisi;
	geciciEleman2 = kusSayisi;
	while (tavsanSayisi < kusSayisi) {
		geciciEleman1 = tavsanSayisi * rabbitRate;
		tavsanSayisi += geciciEleman1;
		cout << "Tavsan sayisi: " << tavsanSayisi << endl;
		geciciEleman2 = kusSayisi * birdRate;
		kusSayisi += geciciEleman2;
		cout << "Kus sayisi: " << kusSayisi << endl;
		yil++;
	}
	cout << yil << " sonra gecer." << endl;
	
	system("pause");
}