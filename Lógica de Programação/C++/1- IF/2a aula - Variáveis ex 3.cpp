#include <iostream>

#include <locale.h>

using namespace std;

int main (){

	setlocale (LC_ALL, "");
	
	int numero1, numero2, numero3, soma;
	
	cout << "Digite o primeiro número: \n";
	cin >> numero1;
	
	cout << "Digite o segundo número: \n";
	cin >> numero2;
	
	cout << "Digite o terceiro número: \n";
	cin >> numero3;
	
	soma = numero1 + numero2 + numero3;
	
	cout << "\n\nA soma dos três números é: " << soma << "\n";


	system ("Pause");
	return 0;

}
