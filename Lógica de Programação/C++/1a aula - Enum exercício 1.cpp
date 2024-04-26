#include <iostream>
#include <locale.h>

using namespace std;

int main(){	
setlocale (LC_ALL, "Portuguese");

// retorna numeros inteiros da posição na lista 
enum letras {A, B, C, D, E, F, G, H, I, J, K};
int contador;

	for ( contador = A; contador <= K; contador++ ){
		
	cout << "Letra: " << contador << "\n";
		
	}
					
	system ("pause");
	
	return 0;
		
}

