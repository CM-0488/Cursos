#include <iostream>

#include <locale.h>

using namespace std;

int main (){	
	
	setlocale (LC_ALL, "Portuguese");
		
	string nome;
	int contador;
	double nota, media, soma;
	
	soma = 0;
	
	cout << "Nome do aluno(a): \n";
	cin >> nome;
	
	for ( contador = 1; contador <= 4; contador++ ){
	
		cout << "Nota: " << contador << "\n";
		cin >> nota;
		
		soma += nota;

	}
	
		media = soma / 4;
	
		cout << "Nome do aluno(a): " << nome << "\n";
		cout << "Média: " << media << "\n\n";
		
		
	system ("pause");
	
	return 0;
		
	}
	
