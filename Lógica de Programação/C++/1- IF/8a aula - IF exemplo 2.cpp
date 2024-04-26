#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	double valorentrada;
	string nome, sexo;
	
	valorentrada = 12.00;
	
	cout << "Digite o seu nome: \n";
	cin >> nome;
	
	cout << "\nDigite o seu sexo: \n";
	cin >> sexo;
	
	if ( sexo == "Masculino" ){
		
		cout << "\n\n ----- Comprovativo de Entrada -----\n\n";
		cout << "Nome: " << nome << "\n";
		cout << "Valor Entrada: R$ " << valorentrada << "\n";
		cout << "\n\n ----- Bom show! ----- \n\n"; 
		
	}else if ( sexo == "Feminino" ){
		
	valorentrada = valorentrada / 2;
		
		cout << "\n\n ----- Comprovativo de Entrada -----\n\n";
		cout << "Nome: " << nome << "\n";
		cout << "Valor Entrada: R$ " << valorentrada << "\n";
		cout << "\n\n ----- Bom show! ----- \n\n"; 


	}else if ( sexo == "Nao-Binario" ){
		
	valorentrada = valorentrada / 2;
		
		cout << "\n\n ----- Comprovativo de Entrada -----\n\n";
		cout << "Nome: " << nome << "\n";
		cout << "Valor Entrada: R$ " << valorentrada << "\n";
		cout << "\n\n ----- Bom show! ----- \n\n"; 
	
			
	}else{

	cout << "\nGênero ainda não cadastrado - Desculpe pelo inconveniente.\n Solicite ao caixa pelo ticket 'Bolsonaro-Pau-No-Cu'.\n Tenha um bom show! \n\n";

	}
	
		
	system ("pause");
	
	return 0;
}
