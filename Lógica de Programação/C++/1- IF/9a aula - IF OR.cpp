#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	int numero;
	
	recomecar:
	
	cout << "Digite um número entre 1 e 30: \n";
	cin >> numero;
			
	if ( numero >= 1 || numero <= 30 ){
		
		cout << "\nO número " << numero << " é maior que 1 ou menor que 30\n\n";
	
	}
			
	system ("pause");
	
	return 0;
	
}
