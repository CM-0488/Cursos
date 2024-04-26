#include <iostream>
#include <locale.h>

using namespace std;
void funcaonome (string nomeusuario = "Carla");
void funcaoidade (int idade = 36);


int main(){	
	
	setlocale (LC_ALL, "Portuguese");
		
	funcaonome ();
	funcaoidade ();
	
			
	system ("pause");
	
	return 0;
		
	}

	void funcaonome (string nomeusuario){

		cout << "Nome: " << nomeusuario << "\n";

	}

	void funcaoidade (int idade){

		cout << "Idade: " << idade << "\n";


}
	
		
	
