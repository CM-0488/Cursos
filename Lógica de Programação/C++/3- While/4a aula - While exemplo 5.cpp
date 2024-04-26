#include <iostream>

#include <locale.h>

using namespace std;

int main (){	
	
	setlocale (LC_ALL, "Portuguese");
		
	int quadrado, numero;
		
	cout << "Digite um número: \n";
	cout << "Digite 0 para encerrar\n\n";
	cin >> numero;
			
	while ( numero != 0 ){
		
					
		quadrado = numero * numero;
					
		cout << "\nO quadrado do número " << numero << " é igual a " << quadrado << "\n\n";
		

	cout << "Digite um número: \n";
	cout << "Digite 0 para encerrar\n\n";
	cin >> numero;
	
	}	
	system ("pause");
	
	return 0;
		
	}
		
