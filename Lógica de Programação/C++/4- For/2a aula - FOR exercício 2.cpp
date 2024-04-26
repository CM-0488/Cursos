#include <iostream>

#include <locale.h>

using namespace std;

int main (){	
	
	setlocale (LC_ALL, "Portuguese");
		
	int numero, pares, contador;
	

	for (contador = 1; contador <=10; contador++){
		
			cout << "Digite o número: " << contador << "\n";
			cin >> numero;
			
			if ( numero % 2 == 0 ){
				
				pares++;	
				
			}
						
	
	} 
	
	cout << "Quantidade de números pares digitados: " << pares << "\n\n";
	cout << "Quantidade de números impares digitados: " << 10 - pares << "\n\n";
			
		
	system ("pause");
	
	return 0;
		
	}
	
