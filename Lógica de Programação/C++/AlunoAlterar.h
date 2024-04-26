#ifndef aluno_H_INCLUDED
#define aluno_H_INCLUDED

class Aluno{
	
	public:
		
		int codigo;
		std::string nome;
		int idade;
		std::string sexo;
		
		Aluno(int codigoAluno);
		
		void dados();
		
};

void Aluno::dados(){
	
	std::cout << "Código: " << codigo << std::endl;
	std::cout << "Nome: " << nome << std::endl;
	std::cout << "Idade: " << idade << std::endl;
	std::cout << "Sexo: " << sexo << std::endl;
	std::cout << std::endl;


}


	
Aluno::Aluno(int codigoAluno){
	
	if (codigoAluno == 1) {
		
		codigo = 1;
		nome = "Carla";
		idade = 36;
		sexo = "Feminino";
	
	}else if (codigoAluno == 2) {
		
		codigo = 2;
		nome = "Jonas";
		idade = 48;
		sexo = "Masculino";
		
	}else if (codigoAluno == 3) {
		
		codigo = 3;
		nome = "Amanda";
		idade = 21;
		sexo = "Feminino";
		
	}
	
}


#endif
