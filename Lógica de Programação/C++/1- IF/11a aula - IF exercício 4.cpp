#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	int numero1, numero2, numero3;
	string resultado;
	
	cout << "Digite o 1o número: \n";
	cin >> numero1;

	cout << "\nDigite o 2o número: \n";
	cin >> numero2;

	cout << "\nDigite o 3o número: \n";
	cin >> numero3;
			
	( numero1 > numero2 || numero1 > numero3 ) ? resultado = "O número 1 é o maior" : ( numero2 > numero1 || numero2 > numero3 ) ? resultado = "O número 2 é o maior" : ( numero3 > numero2 || numero3 > numero1 ) ? resultado = "O número 3 é o maior";
	
	system ("pause");
	
	return 0;
	
}
