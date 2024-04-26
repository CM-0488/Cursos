#include <iostream>
#include <locale.h>

using namespace std;

#include "AlunoPrivado.h"
					
int main(){	
setlocale (LC_ALL, "Portuguese");


	Aluno *dadosAluno = new Aluno(1);
	
	dadosAluno -> dados();
	
	//alterar o nome público
	dadosAluno -> nome = "Marcelo Urban";
	dadosAluno -> setidade(28);
		
	dadosAluno -> dados();
	
	

	//Imprimir públicos e privados
	cout << dadosAluno -> nome << "\n";
	cout << dadosAluno -> getidade () << "\n";
	

	system ("pause");
	
	return 0;
		
}

