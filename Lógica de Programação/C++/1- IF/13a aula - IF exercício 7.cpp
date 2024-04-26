#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	int valorasacar, dois, cinco, dez, vinte, cinquenta, cem, duzentos, resto;
	
	cout << "Quanto deseja sacar (até 2.000,00$)? Notas disponíveis: 2, 5, 10, 20, 50, 100 e 200" << "\n";
	cin >> valorasacar;
	
	if ( valorasacar < 2 or valorasacar > 2000 ){
		
		cout << "Valor indisponível. Apenas saques maiores que 2$ e menores que 2.000,00$" << "\n";  
		
		
	}else{ 
		
		duzentos = valorasacar /200; 
		cout << "Resultado 200: " << duzentos << "\n";
		
		valorasacar -= duzentos * 200;
		cout << "Resultado valor: " << valorasacar << "\n";

		cem = valorasacar /100; 
		valorasacar -= cem * 100;
		
		cinquenta = valorasacar /50; 
		valorasacar -= cinquenta * 50;
		
		vinte = valorasacar /20; 
		valorasacar -= vinte * 20;
	
		dez = valorasacar /10; 
		valorasacar -= dez * 10;
	
		cinco = valorasacar /5; 
		valorasacar -= cinco * 5;
		
		dois = valorasacar /2; 
		valorasacar -= dois * 2;
		
		resto = valorasacar;
		
		
			if ( resto >= 1 ){
				
				cout << "Valor indisponível. Apenas saques maiores que 2$ e menores que 2.000,00$" << "\n";
				
			}else{
				
					if ( duzentos > 0 ){
				
					cout << "Nota(s) de 200$: " << duzentos << "\n";
					}
		
					if ( cem > 0 ){
				
					cout << "Nota(s) de 100$: " << cem << "\n";
					}
					
					if ( cinquenta > 0 ){
				
					cout << "Nota(s) de 50$: " << cinquenta << "\n";
					}
					
					if ( vinte > 0 ){
				
					cout << "Nota(s) de 20$: " << vinte << "\n";
					}
					
					if ( dez > 0 ){
				
					cout << "Nota(s) de 10$: " << dez << "\n";
					}
					
					if ( cinco > 0 ){
				
					cout << "Nota(s) de 5$: " << cinco << "\n";
					}
					
					if ( dois > 0 ){
				
					cout << "Nota(s) de 2$: " << dois << "\n";
					}
												
			}
				

	system ("pause");
	
	return 0;
	}


}
