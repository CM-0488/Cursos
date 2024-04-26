#include <iostream>
#include <locale.h>

using namespace std;
int verificador(int numeroum, int numerodois);

int main(){	
setlocale (LC_ALL, "Portuguese");


int numero1, numero2, resultado;

	cout << "Digite o 1º número: \n";
	cin >> numero1;
				
	cout << "Digite o 2º número: \n";
	cin >> numero2;

	resultado = verificador(numero1, numero2);
	
	cout << "\n\nO menor número digitado é o " << resultado << "\n\n";
	
						
	system ("pause");
	
	return 0;
		
}

int verificador(int numeroum, int numerodois){
	
	if ( numeroum < numerodois ){
	
	return numeroum;
	
}else{
	
	return numerodois;
	
}

}
