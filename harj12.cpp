/****IIZ01010****
Harjoitus 12
Ryhm�: IIO14S2
Tekij�: Joel Kortelainen
Kuvaus: Tee ohjelma, joka kysyy k�ytt�j�lt� kokonaisluvun v�lilt� 1-9 ja tulostaa vastauksen
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
#include <string>
using namespace std;

void printToConsole(string);
void repeatPrint(int, int);
void printRepeatingNumbers(int, int);
void clearConsole();
int getUserInput();

int main()
{
	printToConsole("Insert number between 1-9 and press Enter");
	int number = getUserInput();
	clearConsole();
	printRepeatingNumbers(1, number);

	return(0);
}

void printToConsole(string instructions)
{
	cout << instructions << endl;
}

void clearConsole()
{
	system("cls");
}

int getUserInput()
{
	int number;
	cin >> number;
	return number;
}

void printRepeatingNumbers(int from, int to)
{

	for (int i = from; i <= to; i++)
	{
		repeatPrint(i, i);
	}
}

void repeatPrint(int numberToPrint, int times)
{
	
	for (int i = 0; i < times; i++)
	{
		cout << numberToPrint;
	}
	cout << endl;
}


