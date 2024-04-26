#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	int numero1;
	
	numero1 = 0;
	
	cout << numero1 << "\n\n";
	
	//modo convencional
	numero1 = numero1 + 1;
	
	cout << numero1 << "\n\n";
	
	//modo elegante
	numero1++;
	
	cout << numero1 << "\n\n";
	
	
	numero1--;
	
	cout << numero1 << "\n\n";
	
	
	numero1 += 1;
	
	cout << numero1 << "\n\n";
	
	
	numero1 -= 1;
	
	cout << numero1 << "\n\n";
	
		
	
	system ("pause");
	
	return 0;
}
