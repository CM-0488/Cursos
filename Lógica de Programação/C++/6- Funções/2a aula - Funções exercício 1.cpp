#include <iostream>
#include <locale.h>

using namespace std;
int somarnumeros(int numerorecebido);

int main(){	
setlocale (LC_ALL, "Portuguese");

	int algoritmo, soma;
	
	cout << "Digite um número qualquer: \n";	
	cin >> algoritmo;
	
	soma = somarnumeros(algoritmo);
	
		cout << "\nA soma dos números de 1 a " << algoritmo << " é " << soma << "\n\n";
						
	system ("pause");
	
	return 0;
		
}

int somarnumeros(int numerorecebido){
	
	int resultado;
	
	if (numerorecebido == 1){
	
	return (1);

}else{  

	resultado = numerorecebido + somarnumeros (numerorecebido -1);
 	
}		
	 
	 return (resultado);		
	 

}
