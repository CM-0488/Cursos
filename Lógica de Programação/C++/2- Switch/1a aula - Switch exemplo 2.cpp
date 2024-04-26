#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	int andar;
	
	recomecar:
	
	cout << "Digite o andar que deseja morar entre 1 e 16 " << "\n\n";
	cin >> andar;
	
	switch (andar){
	
		case 1:
		case 2:
		case 3:
			
			cout << "\nAndares 1, 2 e 3 (50 m2): 200 000.00$ \n\n";
		
			break;
		case 4:
		case 5: 
	
			cout << "\nAndares 4 e 5 (55 m2): 220 000.00$ \n\n";
	
			break;
	
		case 6:
		case 7:
		case 8:
		case 9:
		
			cout << "\nAndares 6, 7, 8 e 9 (70 m2): 280 000.00$ \n\n";
			
			break;
	
		case 10:
		case 11:
		case 12:
		
			cout << "\nAndares 10, 11 e 12 (150 m2): 350 000.00$ \n\n";
		
			break;
	
		case 13:
		case 14:
		case 15:
		
			cout << "\nAndares 13, 14 e 15 (250 m2): 500 000.00$ \n\n";
		
			break;
		
		case 16:
		
		cout << "\nAndar 16 (Duplex): 1 000 000.00$ \n\n";
		
		break;
		
		default:
		
			cout << "\nEscolha inválida, escolha uma das opções da lista. " << "\n\n";
								
		goto recomecar;
		
	}
	
	system ("pause");
	
	return 0;
	}

