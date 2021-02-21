#include <iostream>
using namespace std;
#include <string>
//programma che determina quale dei due numeri è maggiore rispetto al loro valore
int main()
{
	int a;
	int b;
	cout << "Inserisci il primo numero:";
	cin >> a;
	cout << "Inserisci il secondo numero:";
	cin >> b;

	if (a > b) //condizione = domanda
	{
		cout << "Il primo numero e' maggiore del secondo numero"; //se è vero stampa questo
	}

	else if /*altrimenti se*/ (a == b) //doppio uguale per domanda, un solo = determina un assegnazione ( a = 10 )
	{
		cout << "Il primo numero e' uguale al secondo numero";
	}

	else //in tutti gli altri casi (< e =)
	{
		cout << "Il primo numero e' minore del secondo numero";
	}

	return 0;
}