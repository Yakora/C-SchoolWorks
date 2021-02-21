#include <iostream>
using namespace std;
#include<string>;

int main() //compiere un azione fino a quando una condizione non viene soddisfatta
{
	int contatore = 0;

	//istruzioni da ripetere
	do {

		cout << "sono ripetuta per la " << contatore + 1 << "volta"<<endl;
		contatore = contatore + 1;
	} while (contatore < 1000);

	return 0;
}
