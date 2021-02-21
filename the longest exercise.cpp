#include <iostream>

using namespace std;

#include<string>


int main()
{
	int a, b, som, dif, pro, quo; //determina variabili
	
	char opzione; //determina opzione di scelta
	
	cout<< "Benvenuto!" << endl; //messaggio di benvenuto

	do //esegui il programma
	{
		cout << "Quali delle seguenti operazioni vuoi fare?" << endl;
		
		cout << "s - somma" << endl;
		
		cout << "d - differenza" << endl;
		
		cout << "p - prodotto" << endl;
		
		cout << "q - quoziente" << endl;
		
		cout << "e - esci" << endl; //chiudi il programma
		
		cin >> opzione; //leggi l' opzione

		//somma
		
		if (opzione == 's')
		{
			cout << "Inserisci il primo numero:" << endl;
			
			cin >> a;//leggi a 
			
			cout << "Inserisci il secondo numero:" << endl;
			
			cin >> b;//leggi b
			
			som = a + b;//calcola somma
			
			cout << "Ecco il risultato:" << endl;
			
			cout << som<< endl;//stampa somma
		}

		//differenza
		
		if (opzione == 'd') //selezione "d"
		{
			cout << "Inserisci il primo numero:" << endl;
			
			cin >> a;//leggi a 
			
			cout << "Inserisci il secondo numero:" << endl;
			
			cin >> b;//leggi b
			
			dif = a - b;//calcola differenza
			
			cout << "Ecco il risultato:" << endl;
			
			cout << dif << endl;//stampa differenza
		}
		
		//prodotto
		
		if (opzione == 'p') //selezione "p"
		{
			cout << "Inserisci il primo numero:" << endl;
			
			cin >> a;//leggi a 
			
			cout << "Inserisci il secondo numero:" << endl;
			
			cin >> b;//leggi b
			
			pro = a * b;//calcola prodotto
			
			cout << "Ecco il risultato:" << endl;
			
			cout << pro << endl;//stampa prodotto
		}

		//quoziente
		
		if (opzione == 'q')
		{
			cout << "Inserisci il primo numero:" << endl;
			
			cin >> a;//leggi a 
			
			cout << "Inserisci il secondo numero:" << endl;
			
			cin >> b;//leggi b
			
			quo = a / b;//calcola quoziente
			
			cout << "Ecco il risultato" << endl;
			
			cout << quo << endl;//stampa quoziente
		}


	} while (opzione !='e');// il programma continua a fino a quando l' utente non scrive e nello pseudomenu
	
	return 0;
}
