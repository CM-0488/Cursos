#include <iostream>

#include <locale.h>

using namespace std;

double nota1VG, nota2VG;

int main (){
	
	setlocale (LC_ALL, "");
	
	double nota3VL, nota4VL, media;
	
	nota1VG = 7;
	nota2VG = 10;
	nota3VL = 6;
	nota4VL = 8;
	
	
	media = (nota1VG + nota2VG + nota3VL + nota4VL) / 4;
	
	cout << "Média: " << media << "\n";
	
	
	
	system ("pause");
	
	return 0;
}
