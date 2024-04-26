#include <iostream>

#include <locale.h>

using namespace std;

int main (){

setlocale(LC_ALL, "");

double m, c;

cout << "Digite quantos metros você quer converter:  \n";
cin >> m;

c = m * 100;

cout << "\n" << m << " metros correspondem a " << c << " centímetros. \n\n";

system ("PAUSE");

return 0; 

}


