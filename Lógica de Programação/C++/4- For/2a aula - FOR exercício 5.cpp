#include <iostream>

#include <locale.h>

using namespace std;

int main (){	
	
	setlocale (LC_ALL, "Portuguese");
		
	int populacao, votos, nulos, vereador1, vereador2, vereador3, contador;
	
	cout << "Quantidade de eleitores da cidade: \n";
	cin >> populacao;
	
	vereador1 = 0;
	vereador2 = 0;
	vereador3 = 0;
	nulos = 0;
	
	for ( contador = 1; contador <= populacao; contador++ ){
		
		cout << "Escolha o seu candidato: \n\n";
		cout << "Candidata Ana Gomes = 1 \n";
		cout << "Candidato João Silva = 2 \n";
		cout << "Canditato Jorge Rocha = 3 \n";
		cout << "Voto nulo = 00 \n";
		cin >> votos;
		
		if (votos == 1){
			
			vereador1++;
			
		}else if (votos == 2){
			
			vereador2++;
			
		}else if (votos == 3){
			
			vereador3++;
			
		}else if (votos == 00){
		
			nulos++;
		
		}
			
	}
	
	cout << "\n\n-------- Resultado das eleições para vereador da cidade --------\n\n";
	cout << "Canditata Ana Gomes: " << vereador1 << " voto(s) \n";
	cout << "Canditato João Silva: " << vereador2 << " voto(s) \n";
	cout << "Canditata Jorge Rocha: " << vereador3 << " voto(s) \n";
	cout << "Votos Nulos: " << nulos << " voto(s) \n";
	
	
	system ("pause");
	
	return 0;
		
	}
	
