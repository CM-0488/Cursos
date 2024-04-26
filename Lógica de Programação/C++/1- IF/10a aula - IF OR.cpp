#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	string fruta;
	
	fruta = "Maçã";
				
	if ( fruta == "Maçã" || fruta == "Banana" ){
		
		cout << "Fruta: " << fruta << "\n";
		cout << "A fruta é Maçã ou Banana\n\n";
	
	}else{
		
		cout << "Fruta: " << fruta << "\n";
		cout << "A fruta não é Maçã nem Banana\n\n";
			
	}
			
	system ("pause");
	
	return 0;
	
}
