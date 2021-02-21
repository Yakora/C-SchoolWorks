
#include <iostream>
using namespace std;
#include<string>
int main()
{
	int opzionescelta;
	
	do
	{
		cout << "Quale tra queste opzioni vuoi fare?" << endl;
		cout << "1 - Stampa un numero" << endl;
		cout << "2 - Stampa una frase" << endl;
		cout << "3 - Chiudi il programma" << endl;
		cout << "Scelta:" << endl;
		cin >> opzionescelta;

		switch (opzionescelta)
		{
		case 1:
			cout << "Numero:" << 25 << endl;
			break;
		case 2:
			cout << "Adoro C++" << endl;
			break;
		case 3:
			return 0;

		default:
			cout << "Operazione non valida!" << endl;
			break;
		}
	} while (opzionescelta != 3);

return 0;
}