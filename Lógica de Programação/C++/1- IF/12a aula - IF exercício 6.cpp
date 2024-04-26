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
	
	if ( numero1 > numero2 && numero2 > numero3 ){
		
		cout << "\n" << numero1 << "\n" << numero2 << "\n" << numero3 << "\n";  
		
				
	}else if ( numero1 > numero3 && numero3 > numero2 ){
		
		cout << "\n" << numero1 << "\n" << numero3 << "\n" << numero2 << "\n";
				
		
	}else if ( numero2 > numero1 && numero1 > numero3 ){ 
		
		cout << "\n" << numero2 << "\n" << numero1 << "\n" << numero3 << "\n"; 
		
	
	}else if ( numero2 > numero3 && numero3 > numero1 ){ 
		
		cout << "\n" << numero2 << "\n" << numero3 << "\n" << numero1 << "\n"; 
		

	}else if ( numero3 > numero1 && numero1 > numero2 ){ 
		
		cout << "\n" << numero3 << "\n" << numero1 << "\n" << numero2 << "\n";
		
	
	}else{ 
		
		cout << "\n" << numero3 << "\n" << numero2 << "\n"<< numero1 << "\n";


	system ("pause");
	
	return 0;
	}


}
