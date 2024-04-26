#include <iostream>
#include <locale.h>

using namespace std;
void contagem (int numero, int vezes=1);


int main(){	
setlocale (LC_ALL, "Portuguese");

	int contador;
	contador = 1;
	
	cout << "----- Números While -----\n\n";
	
	while ( contador < 11 ) {
		
		cout << "Número While: " << contador << "\n";
		contador++;
		
	}
	
	cout << "\n\n----- Números Função -----\n\n";	
	contagem (10);
						
	system ("pause");
	
	return 0;
		
	}

	void contagem (int numero, int vezes) {

		cout << "Número Função: " << vezes << "\n";
		
		if ( numero > vezes ){
			
			contagem (numero, ++vezes);
			
			
		}
		
		
	}

