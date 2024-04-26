#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	double valorhora, horastrabalhadas, salariobruto, descontoIRS, descontoINSS, descontosindicato, totaldescontos, salarioliquido;
	
	cout << "Digite o valor da hora de trabalho: \n";
	cin >> valorhora;
	
	cout << "Digite quantas horas trabalhou neste mês: \n";
	cin >> horastrabalhadas;

	salariobruto = valorhora * horastrabalhadas;
	
	cout << "Salário Bruto: " << salariobruto << "\n\n";
	
	//descontos
	//IRS 11%
	descontoIRS = salariobruto * (11.0 / 100);	
	
	//INSS 8%
	descontoINSS = salariobruto * (8.0 / 100);
		
	//Sindicato 5%
	descontosindicato = salariobruto * (5.0 / 100);
	
	totaldescontos = descontoIRS + descontoINSS + descontosindicato;
	
	salarioliquido = salariobruto - totaldescontos;
	
	cout << "IRS 11%: " << descontoIRS << "\n";
	
	cout << "INSS 8%: " << descontoINSS << "\n";
	
	cout << "Sindicato 5%: " << descontoINSS << "\n\n";
	
	cout << "Salário Líquido: " << salarioliquido << "\n";
	
	
	
		
	system ("pause");
	
	return 0;
}
