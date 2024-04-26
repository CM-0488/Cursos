#include <iostream>

#include <locale.h>

using namespace std;

int main (){	
	
	setlocale (LC_ALL, "Portuguese");
		
	string comoda [4];
	int posicao;
	
	comoda [0] = "Camisas";
	comoda [1] = "Calças";
	comoda [2] = "Jaquetas";
	comoda [3] = "Meias";
	
	for (posicao = 0; posicao < 4; posicao++ ){
		
		cout << "Posição " << posicao << " : " << comoda[posicao] << "\n";
		
	}
	
	
	system ("pause");
	
	return 0;
		
	}
	
