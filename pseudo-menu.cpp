#include<iostream>
#include<string>
using namespace std;
//creazione di un programma che fa la somma di due numeri e ti da la possibiltà di scegliere se ripetere il problema
int main(){
	char opzione;
	do {
		int a, b, s;//dichiarazione variabili
		cout << "Inserisci il numero:"<<endl;
		cin >> a; //leggi a 
		cout << "Inserisci il numero:"<<endl;
		cin >> b;//leggi b
		s = a + b;//calcola somma
		cout << "La somma e'"<<endl;
		cout<<s<<endl;//stampa somma

		//quando il problema termina determinare la possibilità di scegliere se continuare a sommare numeri o meno
		cout << "Scegli l' opzione:" << endl;
		cout << "c - continua" << endl;
		cout << "e - esci" << endl;
		cin >> opzione;
	} while (opzione != 'e');

}
