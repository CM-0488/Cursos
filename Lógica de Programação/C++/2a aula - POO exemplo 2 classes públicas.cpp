#include <iostream>
#include <locale.h>

using namespace std;

#include "aluno.h"
					
int main(){	
setlocale (LC_ALL, "Portuguese");

	Aluno *dadosAluno1 = new Aluno(1);
	Aluno *dadosAluno2 = new Aluno(2);
	Aluno *dadosAluno3 = new Aluno(3);
	Aluno *dadosAluno4 = new Aluno(4);

	dadosAluno1 -> exibir();
	dadosAluno2 -> exibir();
	dadosAluno3 -> exibir();
	dadosAluno4 -> exibir();
		


	system ("pause");
	
	return 0;
		
}

