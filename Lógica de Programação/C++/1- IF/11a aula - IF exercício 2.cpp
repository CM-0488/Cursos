#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	string sexo;

	sexo = "feminino", "masculino", "LGBTQIAmais";
	
	cout << "Digite o seu sexo: Feminino, Masculino, LGTBTQIAmais \n";
	cin >> sexo;
	
	if ( sexo == "feminino" ){
	
		cout << "\nVocê digitou: " << sexo  << "\n\n";
	
	}else if ( sexo == "masculino" ){ 
	
		cout << "\nVocê digitou: " << sexo << "\n\n";
	
	}else{
		
		cout << "Você digitou: " << sexo << "\n\n";
		
	}
	
	system ("pause");
	
	return 0;
	
}
