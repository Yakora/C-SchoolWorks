#include <iostream>
using namespace std;
#include <string>
int main()
{
    int contatore = 0;

	while (contatore < 1000)
	{
		cout << "sono ripetuto per la" << contatore + 1 << "Volta"<<endl;
		contatore = contatore + 1; 
			
	}

	
	return 0;
}