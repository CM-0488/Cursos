#include <iostream>

#include <locale.h>

using namespace std;

int main (){	
	
	setlocale (LC_ALL, "Portuguese");
		
	int fatorial, numero, contador;
	
	fatorial = 1;
	
	cout << "Digite um número: " << "\n";
	cin >> numero;
		
	for (contador = numero; contador >= 1; contador--){
		
	fatorial *= contador;
			
	} 
	
	cout << "\nO fatorial de " << numero << " é " << fatorial << "\n";
	
	system ("pause");
	
	return 0;
		
	}
	
