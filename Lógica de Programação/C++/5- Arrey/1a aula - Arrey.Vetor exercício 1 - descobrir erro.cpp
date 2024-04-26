#include <iostream>
#include <locale.h>

using namespace std;

int main (){	
	
	setlocale (LC_ALL, "Portuguese");
		
	int posicao, contador;
	int vetor[5], impares[5];
		
	for ( posicao = 0; posicao < 5; posicao++ ){
		
		cout << "Digite um número:\n ";
		cin >> vetor[posicao];
		
		if ( vetor[posicao] % 2 != 0 ){
			
			impares[contador] = vetor[posicao];
			contador++;
			
		}
		
					
	}
	
	cout << "\nOs números ímpares digitados são: \n";
	
	for ( posicao = 0 ; posicao < contador; posicao++ ){
		
		cout << impares[posicao] << "\n";
		
	}
	
	
	system ("pause");
	
	return 0;
		
	}
	
