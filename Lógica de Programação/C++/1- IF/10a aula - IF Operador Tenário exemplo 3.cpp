#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	string sexo;
	int preco;
	
	preco = 10;
	
	cout << "Digite o seu sexo: \n";
	cin >> sexo;
	
	// ++ significa soma do preço +1 e -= significa preço - o número digitado depois do sinal de =, que pode ser qualquer outro número que eu queira usar
	( sexo == "Masculino" ) ? preco++ : preco-=3;
	
	cout << "\nSexo: " << sexo << "\n";
	cout << "Preço a pagar: " << preco << "$\n\n";
	
	
	system ("pause");
	
	return 0;
	
}
