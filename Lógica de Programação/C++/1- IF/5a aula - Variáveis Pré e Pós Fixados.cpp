#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	int numero1 = 10;
	
	cout << "-- Número inicial --\n";	
	cout << "Número: " << numero1 << "\n\n";
		
	
	numero1*=2;
	
	cout << "-- Número Multiplicado --\n";
	cout << "Número: " << numero1 << "\n\n";


	numero1/=4;

	cout << "-- Número Dividido --\n";
	cout << "Número: " << numero1 << "\n\n";	
	
	
	//pós fixado 
	numero1 = 100;
	
	cout << "\n ----- Pós Fixado ---- \n";
	cout << "Número = 100" << "\n";
	cout << "Número = " << numero1++ << "\n";
	cout << "Número = " << numero1 << "\n";
	
	
	//pré fixado
	numero1 = 100;
	
	cout << "\n ----- Pré Fixado ----- \n";
	cout << "Número = 100" << "\n";
	cout << "Número = " << ++numero1 << "\n";
		
	
		
	system ("pause");
	
	return 0;
}
