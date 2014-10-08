/****IIZ01010****
Harjoitus 12
Ryhmä: IIO14S2
Tekijä: Joel Kortelainen
Kuvaus: Tee ohjelma, joka kysyy käyttäjältä kokonaisluvun väliltä 1-9 ja tulostaa vastauksen
perusteella seuraavan kuvion (jos vastaus on 6):
	1 
	22 
	333 
	4444
	55555
	666666
Versio 1.0
8.10.2014
*/

#include <iostream>
using namespace std;

int i = 1;
int j = 0;
int number = 1;
void jmethod(int);
void imethod(int);

int main()
{
	cout << "Insert number between 1-9 and press Enter" << endl;
	cin >> number;
	system("cls");
	imethod(number);

	return(0);
}

void imethod(int number)
{
	for (i = 1; i <= number; ++i)
		jmethod(i);
}

void jmethod(int i)
{
	for (j = 0; j < i; ++j)
		cout << i;
		cout << endl;
}

