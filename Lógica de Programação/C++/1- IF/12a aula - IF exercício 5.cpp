#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	int numero1, numero2, numero3;
	
	cout << "Digite o 1º número: \n";
	cin >> numero1;
	
	cout << "\nDigite o 2º número: \n";
	cin >> numero2;
	
	cout << "\nDigite o 3º número: \n";
	cin >> numero3;
	
	if ( numero1 > numero2 && numero1 > numero3 ){
		
		cout << "\nO número " << numero1 << " é o maior.\n";
		
		
	}else if ( numero2 > numero1 && numero2 > numero3 ){
		
		cout << "\nO número " << numero2 << " é o maior.\n";

	
	}else{
		
		cout << "\nO número " << numero3 << " é o maior.\n";  
		
	}
	
		if ( numero1 < numero2 && numero1 < numero3 ){
		
		cout << "\nO número " << numero1 << " é o menor.\n";
		
		
	}else if ( numero2 < numero1 && numero2 < numero3 ){
		
		cout << "\nO número " << numero2 << " é o menor.\n";

	
	}else{
		
		cout << "\nO número " << numero3 << " é o menor.\n";  

	system ("pause");
	
	return 0;
	}


}
