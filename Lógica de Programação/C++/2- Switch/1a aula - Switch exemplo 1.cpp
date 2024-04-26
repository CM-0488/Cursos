#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	int escolha;
	
	recomecar:
	
	cout << "Na sua opinião, qual país tem a melhor qualidade de vida?" << "\n";
	cout << "1 - Alemanha\n";
	cout << "2 - Áustria\n";			
	cout << "3 - Bélgica\n";
	cout << "4 - Canadá\n";
	cout << "5 - Dinamarca\n";
	cout << "6 - Eslováquia\n";
	cout << "7 - Finlândia\n";
	cout << "8 - Holanda\n";
	cout << "9 - Inglaterra\n";
	cout << "10 - Noruega\n";
	cout << "11 - Portugal\n";
	cout << "12 - Suíça\n";
	cout << "13 - Suécia\n\n";
	cin >> escolha;
	
	switch (escolha){
		
		case 1:
			cout << "\nOpção escolhida: 1, Alemanha " << "\n\n";
			
			break;
			
		case 2:
			cout << "\nOpção escolhida: 2, Áustria " << "\n\n";
			
			break;
			
		case 3:
			cout << "\nOpção escolhida: 3, Bélgica " << "\n\n";
			
			break;
			
		case 4:
			cout << "\nOpção escolhida: 4, Canadá " << "\n\n";
			
			break;
			
		case 5:
			cout << "\nOpção escolhida: 5, Dinamarca " << "\n\n";
			
			break;
			
		case 6:
			cout << "\nOpção escolhida: 6, Eslováquia " << "\n\n";
			
			break;
			
		case 7:
			cout << "\nOpção escolhida: 7, Finlândia " << "\n\n";
			
			break;
			
		case 8:
			cout << "\nOpção escolhida: 8, Holanda " << "\n\n";
			
			break;
			
		case 9:
			cout << "\nOpção escolhida: 9, Inglaterra " << "\n\n";
			
			break;
			
		case 10:
			cout << "\nOpção escolhida: 10, Noruega " << "\n\n";
			
			break;
			
		case 11:
			cout << "\nOpção escolhida: 11, Portugal " << "\n\n";
			
			break;
			
		case 12:
			cout << "\nOpção escolhida: 12, Suíça " << "\n\n";
			
			break;
			
		case 13:
			cout << "\nOpção escolhida: 13, Suécia " << "\n\n";
			
			break;
			
	
		default:
			cout << "\nEscolha inválida, escolha uma das opções da lista. " << "\n\n";
			
		goto recomecar;
		
	}
	
	system ("pause");
	
	return 0;
	}



