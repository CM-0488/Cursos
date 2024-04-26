#include <iostream>
#include <locale.h>

using namespace std;

int main (){	
	
	setlocale (LC_ALL, "Portuguese");
		
	int linha, coluna;
	int matriz [3][3];
	
	for ( linha = 0; linha < 3; linha++ ){
		
		for ( coluna = 0; coluna < 3; coluna++ ) {
		
		cout << "Digite o número da linha: " << linha << " - Coluna " << coluna << " :  " ;
		cin >> matriz[linha][coluna];	
			
		}
				
	}			 
	
	cout << "\n\n-------- Valores Digitados ---------\n";
	for ( linha = 0; linha < 3; linha++ ){
		
		for ( coluna = 0; coluna < 3; coluna++ ) {
		
		cout << matriz[linha][coluna] << "  ";
				
		}
	
		cout << "\n";
	
	}
	
	cout << "\n\n-------- Valores digitados em dobro ---------\n";
	for ( linha = 0; linha < 3; linha++ ){
		
		for ( coluna = 0; coluna < 3; coluna++ ) {
		
		cout << matriz[linha][coluna] * 2 << "  ";
				
		}
	
		cout << "\n";
	
	}
	
			
	system ("pause");
	
	return 0;
		
	}
	
