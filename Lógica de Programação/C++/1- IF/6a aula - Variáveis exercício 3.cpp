#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	double horastrabalhadas, valorporhora, total;

	cout << "Digite o valor da hora trabalhada: \n";
	cin >> valorporhora;
	
	cout << "Digite quantas horas trabalhou durante o mês: 	\n";
	cin >> horastrabalhadas;
	
	total = valorporhora * horastrabalhadas; 
	
	cout << "\n\n Total a receber: " << total << "\n";
	
		
	system ("pause");
	
	return 0;
}
