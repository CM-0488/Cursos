#include <iostream>
#include <locale.h>

using namespace std;

#include "AlunoAlterar.h"
					
int main(){	
setlocale (LC_ALL, "Portuguese");

	Aluno *dadosAluno1 = new Aluno(1);
	
	dadosAluno1 -> dados();
	
	dadosAluno1 -> nome = "Mariana";
	
	dadosAluno1 -> dados();

	//----------------------alterar com cin------------------------------------
	
	string nomeAluno;
	int idadeAluno;
	string sexoAluno;
	
	
	cout << "\n\nDigite o nome do aluno: \n";
	cin >> nomeAluno;

	cout << "Digite a idade do aluno: \n";
	cin >> idadeAluno;
	
	cout << "Digite o sexo do aluno: \n";
	cin >> sexoAluno;
	
		dadosAluno1 -> nome = nomeAluno;
		dadosAluno1 -> idade = idadeAluno;
		dadosAluno1 -> sexo = sexoAluno;
		
		dadosAluno1 -> dados();


	system ("pause");
	
	return 0;
		
}

