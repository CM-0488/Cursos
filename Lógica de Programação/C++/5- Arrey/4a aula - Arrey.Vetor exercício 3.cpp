#include <iostream>
#include <locale.h>

using namespace std;

int main (){	
	
	setlocale (LC_ALL, "Portuguese");
		
	int linha, coluna, diagonal;
	int matriz [3][3];
	
	for ( linha = 0; linha < 3; linha++ ){
		
		for ( coluna = 0; coluna < 3; coluna++ ) {
		
		cout << "Digite o número da linha: " << linha << " - Coluna " << coluna << " :  " ;
		cin >> matriz[linha][coluna];	
			
		}
			
	}			 
	
	cout << "-------- Valores Digitados ---------\n";
	for ( linha = 0; linha < 3; linha++ ){
		
		for ( coluna = 0; coluna < 3; coluna++ ) {
		
		cout << matriz[linha][coluna] << "  ";
				
		}
	
		cout << "\n";
	
	}
	
	diagonal = matriz[0][0] + matriz[1][1] + matriz[2][2];
	
	cout << "\n\nSoma dos valores na diagonal: " << diagonal << "\n";
	
			
	system ("pause");
	
	return 0;
		
	}
	
