#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	int numero1, numero2;
		
	numero1 = 35;
	
	cout << "Digite um número: \n";
	cin >> numero1;
	
	if ( numero1 > 35 ){ 
		
	cout << "O número digitado é maior que 35 \n\n";
	
	} else {

	cout << "O número digitado é menor que 35 \n\n";
	
}	
		
	system ("pause");
	
	return 0;
}



