#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "Portuguese");
		
	int vezes;
	double nota, media, soma;
	
	soma = 0;
	vezes = 1;
	
			
	while (vezes <= 4){
		
		cout << "Digite a nota: " << vezes << "\n";	
		cin >> nota;
	
		soma+=nota;
		vezes++;
				
	}
	
	cout << "\n\n";
	media = soma / 4;
	
	cout << "A média é: " << media << "\n";
	
	
	system ("pause");
	
	return 0;
	}
