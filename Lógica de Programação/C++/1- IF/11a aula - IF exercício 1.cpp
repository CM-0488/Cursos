#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	int numero;
	
	numero = 0;
	
	cout << "Digite um número positivo ou negativo:\n";
	cin >> numero;
	
	if ( numero > 0 ){
		
		cout << "\nO número " << numero << " é positivo.\n\n";
	
	}else if ( numero < 0 ){

		cout << "\nO número " << numero << " é negativo.\n\n";

	}else{ 

		cout << "\nO número " << numero << " é neutro.\n\n";

	}
		
	system ("pause");
	
	return 0;
	
}
