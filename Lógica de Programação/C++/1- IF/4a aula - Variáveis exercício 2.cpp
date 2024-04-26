#include <iostream> 

#include <locale.h> 

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	string nomedoaluno;
	double nota1VL, nota2VL, nota3VL, nota4VL, media;
	
	cout << "Digite o nome do(a) aluno(a): ";
	getline (cin, nomedoaluno);
	
	cout << "Digite a nota 1: ";
	cin >> nota1VL;
	
	cout << "Digite a nota 2: ";
	cin >> nota2VL;
	
	cout << "Digite a nota 3: ";
	cin >> nota3VL;
	
	cout << "Digite a nota 4: ";
	cin >> nota4VL;
	
	
	media = (nota1VL + nota2VL + nota3VL + nota4VL) /4;
	
	cout << "\n\n";
	cout << "O(A) aluno(a) " << nomedoaluno << " teve média " << media << "\n";
	
		
	system("pause");
	
	return 0;
}
