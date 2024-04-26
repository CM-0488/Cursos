#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	string vogal, resultado;
	
	cout << "Digite uma letra: \n";
	cin >> vogal;
	
	( vogal == "A" ) ? resultado = "Vogal A" : ( vogal == "E" ) ? resultado = "Vogal E" : ( vogal == "I" ) ? resultado = "Vogal I" : ( vogal == "O" ) ? resultado = "Vogal O" : ( vogal == "U" ) ? resultado = "Vogal U" : resultado = "Consoante ";
	
	cout << "\nLetra digitada: " << vogal << "\n";
	cout << "Resultado: " << resultado << "\n\n";
	
	
	system ("pause");
	
	return 0;
	
}
