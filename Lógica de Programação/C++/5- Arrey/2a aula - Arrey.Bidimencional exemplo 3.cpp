#include <iostream>

#include <locale.h>

using namespace std;

int main (){	
	
	setlocale (LC_ALL, "Portuguese");
		
	int linha, coluna;
	int matriz [20][21];
	
	for ( linha = 0; linha <20; linha++ ){
		
		for ( coluna = 0; coluna <21; coluna++ ){
			
			matriz [linha][coluna] = coluna;
										
		}
		
		cout << "\n";
	}
	
	cout << "Matriz automática\n";
	
	for ( linha = 0; linha <20; linha++ ){
		
		for ( coluna = 0; coluna <21; coluna++ ){
			
			cout << matriz [linha][coluna] << " ";
										
		}
		
		cout << "\n";
	}
		
	
	system ("pause");
	
	return 0;
		
	}
	
