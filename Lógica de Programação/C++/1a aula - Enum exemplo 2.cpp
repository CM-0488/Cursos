#include <iostream>
#include <locale.h>

using namespace std;

int main(){	
setlocale (LC_ALL, "Portuguese");

// retorna numeros inteiros da posição na lista 
enum calcados{tenis=10, chinelo, sandalia, sapato};

calcados calcadoselecionado;

calcadoselecionado = sandalia;

cout << calcadoselecionado << "\n";
					
	system ("pause");
	
	return 0;
		
}

