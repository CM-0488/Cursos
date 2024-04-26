#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "Portuguese");
		
	int contador;
	
	contador = 10;
		
	while (contador > 0){
		
		cout << "Número: " << contador << "\n";	
	
		contador--;
		
	}
	
	system ("pause");
	
	return 0;
	}
