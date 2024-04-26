#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	int numero1;
	
	numero1 = 10;
	
	cout << "Número 1 = " << numero1 << "\n";
	
	//primeira forma de inverter valores
	numero1 = numero1 * -1;
	
	cout << "Número 1 = " << numero1 << "\n";
	
	
	//segunda forma de inverter valores
	numero1 = 20;
	
	cout << "Número 1 = " << -numero1 << "\n";
	

	//terceira forma de inverter valores
	numero1 = 30;
	
	numero1 = -numero1;
	
	cout << "Número 1 = " << numero1 << "\n";
	
	
		
	system ("pause");
	
	return 0;
}
