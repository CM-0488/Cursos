#include <iostream>

#include <locale.h>

using namespace std;

int main (){

	setlocale (LC_ALL, "");
	
	//"variáveis" é o espaço na memória onde se guarda temporariamente valores
	
	int numerosInteiros = 3;
	double numerosDecimais = 9.99;
	char umaLetra = 'A';
	const char* letras = "ABCDEF";
	string textos = "Aluna: Carla Marcondes";
	bool verdadeiroFalso = false;
	
	cout << numerosInteiros << "\n";
	cout << numerosDecimais << "\n";
	cout << umaLetra << "\n";
	cout << letras << "\n";
	cout << textos << "\n";
	cout << verdadeiroFalso << "\n";
	
	return 0;

}
