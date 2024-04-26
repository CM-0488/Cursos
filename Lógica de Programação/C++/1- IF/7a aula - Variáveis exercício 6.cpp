#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	double numero1, numero2, numero3, resultado1, resultado2, resultado3;
	
	cout << "Digite o 1º número: \n";
	cin >> numero1;
	
	cout << "Digite o 2º número: \n";
	cin >> numero2;
	
	cout << "Digite o 3º número: \n";
	cin >> numero3;
	
	
	resultado1 = (numero1 * 2) + (numero2 / 2);
	
	resultado2 = (numero2 *3) + numero3;
	
	resultado3 = numero3 * 2;
	
	
	cout << "----- Resultados -----\n\n";
	
	cout << "Resultado 1: " << resultado1 << "\n\n";
	
	cout << "Resultado 2: " << resultado2 << "\n\n";
	
	cout << "Resultado 3: " << resultado3 << "\n\n";
	
		
	system ("pause");
	
	return 0;
}
