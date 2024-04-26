#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	string capital;
	
	recomecar:
			
	cout << "Qual é a Capital da China? \n";
	cin >> capital;
		
	if ( capital == "Pequim" ){
		
		cout << "\nVocê acertou! A capital da China é Pequim, ou Beijing. Localizada no Norte do país e uma das cidades mais populosas do mundo, com 21 milhões de habitantes.\n\n";
		
		
	}else if ( capital == "pequim" ){
		
		cout << "\nVocê acertou! A capital da China é Pequim, ou Beijing. Localizada no Norte do país e uma das cidades mais populosas do mundo, com 21 milhões de habitantes.\n\n";
		
	
	}else if ( capital == "PEQUIM" ){
		
		cout << "\nVocê acertou! A capital da China é Pequim, ou Beijing. Localizada no Norte do país e uma das cidades mais populosas do mundo, com 21 milhões de habitantes.\n\n";
	
	
	}else if ( capital == "Beijing" ){
			
		cout << "\nVocê acertou! A capital da China é Pequim, ou Beijing. Localizada no Norte do país e uma das cidades mais populosas do mundo, com 21 milhões de habitantes.\n\n";
	
	
	}else if ( capital == "beijing" ){
			
		cout << "\nVocê acertou! A capital da China é Pequim, ou Beijing. Localizada no Norte do país e uma das cidades mais populosas do mundo, com 21 milhões de habitantes.\n\n";
	
	
	}else if ( capital == "BEIJING" ){
			
		cout << "\nVocê acertou! A capital da China é Pequim, ou Beijing. Localizada no Norte do país e uma das cidades mais populosas do mundo, com 21 milhões de habitantes.\n\n";
	
				
	}else{

		cout << "\n";
		goto recomecar;
	
	}
	
		
	system ("pause");
	
	return 0;
}
