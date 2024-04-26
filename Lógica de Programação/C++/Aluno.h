#ifndef aluno_H_INCLUDED
#define aluno_H_INCLUDED

class Aluno{
	
	public: 

	int codigo;
	int idade;
	std::string nome;
	std::string sexo;

	Aluno (int codigoaluno);
	
	void exibir();

};

void Aluno::exibir(){
	
	std::cout << "Código: " << codigo << std::endl;
	std::cout << "Nome: " << nome << std::endl;
	std::cout << "Idade: " << idade << std::endl;
	std::cout << "Sexo: " << sexo << std::endl;
	std::cout  << std::endl;
	std::cout  << std::endl;

}

Aluno::Aluno (int codigoAluno){
	
	if(codigoAluno == 1){
		
		codigo = 1;
		nome = "Carla Marcondes";
		idade = 36;
		sexo = "Feminino";
		
		
	}else if(codigoAluno == 2){
		
		codigo = 2;
		nome = "João Silva";
		idade = 35;
		sexo = "Masculino";
		

	}else if(codigoAluno == 3){
		
		codigo = 3;
		nome = "Joana Alves";
		idade = 40;
		sexo = "Feminino";
		
		
	}else if(codigoAluno == 4){
		
		codigo = 4;
		nome = "Paulo Duarte";
		idade = 32;
		sexo = "Masculino";
		
		
	}
	
}

#endif
