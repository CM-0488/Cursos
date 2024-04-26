#include <iostream>
#include <locale.h>

using namespace std;
void completo (string nometexto, string sobrenometexto);

int main(){	
setlocale (LC_ALL, "Portuguese");

	string nome, sobrenome;
	
	cout << "Digite o seu nome: \n";
	cin >> nome;
	
	cout << "Digite o seu sobrenome: \n";
	cin >> sobrenome;

	completo (nome, sobrenome);
	
						
	system ("pause");
	
	return 0;
		
}

void completo (string nometexto, string sobrenometexto){
	
	cout << "\nO teu nome é " << nometexto << " Sobrenome: " << sobrenometexto << "\n\n";
	
}
