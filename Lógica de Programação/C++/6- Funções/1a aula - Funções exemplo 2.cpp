#include <iostream>
#include <locale.h>

using namespace std;

void soma(int n1, int n2);

int main(){	
	
	setlocale (LC_ALL, "Portuguese");
		
	soma (21, 10);
	
			
	system ("pause");
	
	return 0;
		
	}

	void soma(int n1, int n2){
		
		cout << "Número 1: " << n1 << "\n";
		cout << "Número 2: " << n2 << "\n";
		cout << "Total da soma: " << n1 + n2 << "\n";
		
	}		
