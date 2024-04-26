#include <iostream>

#include <locale.h>

using namespace std;

int main (){	
	
	setlocale (LC_ALL, "Portuguese");
		
	int posicao, contador;
	int tamanho = 10;
	
	string letras[tamanho] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J" };
	
	for ( posicao = 0, contador = 1; contador < tamanho; posicao++, contador++ ){
		
		cout << "Letra " << contador << " : " << letras[posicao] << "\n";
		
	}
	
	
	system ("pause");
	
	return 0;
		
	}
	
