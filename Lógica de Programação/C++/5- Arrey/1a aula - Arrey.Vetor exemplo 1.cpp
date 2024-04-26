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
	
	cout << "Gaveta 1: " << comoda[0] << "\n";
	cout << "Gaveta 2: " << comoda[1] << "\n";
	cout << "Gaveta 3: " << comoda[2] << "\n";
	cout << "Gaveta 4: " << comoda[3] << "\n";
	
	
	system ("pause");
	
	return 0;
		
	}
	
