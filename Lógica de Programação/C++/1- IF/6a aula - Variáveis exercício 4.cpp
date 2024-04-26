#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	double horastrabalhadas, valorporhora, total;
			
	valorporhora = valorporhora * 1;
		
	cout << "Digite o valor da hora trabalhada: " << "\n";
	cin >> valorporhora;
	
	horastrabalhadas = horastrabalhadas * 1;
	
	cout << "Digite quantas horas trabalhou durante o mês: " << "\n";
	cin >> horastrabalhadas;
	
	total = valorporhora * horastrabalhadas; 
	
	cout << "O total a receber é: " << total << "\n";
	
		
	system ("pause");
	
	return 0;
}
