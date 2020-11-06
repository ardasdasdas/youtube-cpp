#include<iostream>
using namespace std;
/*İç içe döngü kullanarak yıldızlardan içi boş üçgen şekli bastıran kod parçacığı.

			*
			* *
			*  *
			*   *
			******
			
*/
int main()
{
	int sayi;
	cout << "Sayi girin: ";
	cin >> sayi;
	for (int i = 0; i <= sayi; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (i == j || j == 0 || i == sayi)// bir koordinat sistemi çizip i ve j'leri yerlestirdiginiz zaman nerelerde bosluk
											// olmamasi gerektiğini göreceksiniz.
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	system("pause");
}