#ifndef aluno_H_INCLUDED
#define aluno_H_INCLUDED

class Aluno {
	
	public:
		
		int codigo;
		std::string nome;
		
	Aluno(int codigoAluno);
	
	int setidade (int idadeAluno);
	int getidade ();

	void dados();
	
	private:
		
		int idade;
		std::string sexo;

	
};

int Aluno::getidade (){
	
	return idade;
}

int Aluno::setidade(int idadeAluno){
	
	idade = idadeAluno;
	
}

void Aluno::dados(){
		
	std::cout << "Código: " << codigo << "\n";
	std::cout << "Nome: " << nome << "\n";
	std::cout << "Idade: " << idade  << "\n";
	std::cout << "Sexo: " << sexo << "\n";
	std::cout << "\n\n";

}
	

Aluno::Aluno(int codigoAluno){
	
	if ( codigoAluno ==1) {
		
		codigo = 1;
		nome = "Carla";
		idade = 36;
		sexo = "Feminino";
		
	}
}


#endif
