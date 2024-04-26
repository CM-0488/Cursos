#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	int numero;
	
	recomecar:
	
	cout << "Digite um número entre 1 e 10\n";
	cin >> numero;
			
	if ( numero >= 1 && numero <= 10 ){
		
		cout << "\nO número " << numero << " está entre 1 e 10\n\n";
	
					
	}else{

		cout << "\nO número " << numero << " não está entre 1 e 10\n\n";
		goto recomecar;
			
	}
			
	system ("pause");
	
	return 0;
	
}
