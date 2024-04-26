#include <iostream>
#include <locale.h>

using namespace std;

int main(){	
setlocale (LC_ALL, "Portuguese");

// retorna numeros inteiros da posição na lista 
enum roupas {camiseta, calca, meia, cueca};

roupas roupaselecionada;

roupaselecionada = cueca;

cout << roupaselecionada << "\n";


	
						
	system ("pause");
	
	return 0;
		
}

