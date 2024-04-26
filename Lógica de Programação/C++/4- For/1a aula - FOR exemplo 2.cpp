#include <iostream>

#include <locale.h>

using namespace std;

int main (){	
	
	setlocale (LC_ALL, "Portuguese");
		
	int numero;
	
	for ( numero = 1; numero < 19; numero++){

	cout << "Número " << numero << "\n";
		
	}
		
		
	system ("pause");
	
	return 0;
		
	}
	
