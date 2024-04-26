#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	// Para abrir o Notepad
	system ("notepad");
	
	// Para abrir Microsoft Paint
	system ("mspaint");
	
	// Para abrir tabela de cores no Prompt Comando
	system ("color/?");
	
	// Para alterar cor das letras e fundo, sendo 1a opção a cor da letra e a 2a opção a cor do fundo, ou seja, E = letra roxa e 5 = fundo amarelo
	system ("color E5");
	
	// Para pausar entre um comando e outro
	system ("pause");
	
	// Para limpar a tela do Prompt Comando	
	system ("cls");
	
	
		
	system ("pause");
	
	return 0;
}



