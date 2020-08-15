#include <bits/stdc++.h>
using namespace std;

/**
*Recibe  2 numeros y les aplica
* las operaciones aritméticas comunes
*
*
*/
int main(){
	int a, b;
	cout << "Ingresa 2 números seguidos: \n";
	cin >> a >> b;
	cout << "Suma:\t"<< a+b << endl;
	cout << "Resta:\t"<< a-b << endl;
	cout << "Multiplicación:\t"<< a*b << endl;
	cout << "División:\t"<< a/b << endl;
	cout << "Módulo:\t"<< a%b << endl;
	return 0;
}