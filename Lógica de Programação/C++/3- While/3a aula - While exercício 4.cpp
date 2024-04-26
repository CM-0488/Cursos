#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "Portuguese");
		
	int de0a10, de11a20, de21a30, de31a40, numero, numerofora;
	
	de0a10 = 0;
	de11a20 = 0;
	de21a30 = 0;
	de31a40 = 0;
	numerofora = 0;
				
				
	while ( true ){
		
		cout << "Digite um número de 0 (zero) a 40 (quarenta) ou negativo para parar: \n";
		cin >> numero;
		
	if (numero < 0 ){
		
		break;
		
	}
	
	if ( numero <= 10) {
		de0a10++;
	}else if ( numero <=20) {
		de11a20++;		
	}else if ( numero <=30) {
		de21a30++;
	}else if ( numero <=40) {
		de31a40++;
	}else{
		numerofora++;
	}			
	
	}
		
	cout << "Números digitados de 0 a 10: "	<< de0a10 << "\n";
								
	cout << "Números digitados de 11 a 20: " << de11a20 << "\n";
									
	cout << "Números digitados de 21 a 30: " << de21a30 << "\n";
	
	cout << "Números digitados de 31 a 40: " << de31a40 << "\n";

	cout << "Números digitados fora do intervalo: " << numerofora << "\n";
									
	
	system ("pause");
	
	return 0;
		
	}
		
