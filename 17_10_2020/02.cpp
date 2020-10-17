#include<iostream>
using namespace std;
//2- Tavþan-Kuþ sorusu 
/*Bir çiftlikte tavþan sayýsý -> 38
kuþ sayýsý    -> 102
Her sene tavþan sayýsýndaki artýþ oraný -> 0.085
Her sene kuþ sayýsýndaki artýþ oraný 	-> 0.077
Kaç yýl sonra tavþan sayýsý, kuþ sayýsýný geçer ? (Cevap: 134)*/
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