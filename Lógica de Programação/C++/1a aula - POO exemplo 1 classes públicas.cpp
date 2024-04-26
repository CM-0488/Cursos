#include <iostream>
#include <locale.h>

using namespace std;

class aluno {
	
	public:
		
		string nome = "Carla Marcondes";
		int idade = 36;
		string sexo = "Feminino";
		string estado;
		void verificador (string estadoaluno);
	
};

void aluno :: verificador (string estadoaluno){
	
	if (estadoaluno == "SP"){
		
		this -> estado = "São Paulo";
		
	}else if (estadoaluno == "SC"){
		
		this -> estado = "Santa Catarina";
	
	}else if (estadoaluno == "RJ"){
		
		this -> estado = "Rio de Janeiro";	
		
	}else if (estadoaluno == "MT"){
		
		this -> estado = "Mato Grosso";

	}
}
					
int main(){	
setlocale (LC_ALL, "Portuguese");

	aluno *dados = new aluno ();
	cout << "Nome: " << dados -> nome << "\n";
	cout << "Idade: " << dados -> idade << "\n";
	cout << "Sexo: " << dados -> sexo << "\n";
	
	dados -> verificador ("SP");
	cout << "Estado: " << dados -> estado << "\n";
	
	

	system ("pause");
	
	return 0;
		
}

