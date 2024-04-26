#include <iostream>

#include <locale.h>

using namespace  std;

int main () {

	setlocale(LC_ALL, "Portuguese");
	
	string nome;
	int idade;
	
	cout << "Digite o seu nome: \n";
	getline(cin, nome);
	
	cout << "Digite a sua idade: \n";
	cin >> idade;
	
	cout << "--------------------\n";
	cout << "Nome: " << nome << "\n"; 
	cout << "Idade: " << idade << "\n";


	system ("pause");
	return 0;
}
