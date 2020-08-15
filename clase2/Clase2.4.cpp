#include <bits/stdc++.h>
using namespace std;

/**
*Dado un entero n escribir Amo la programación n-veces
*
*/
void escribir(int, string);
void escribirWhile(int, string);
int main(){
	long int a;
	cin >> a ;
	string b="Amo la programación competitiva";
	escribir(a, b);
	cout << "==================================="<< endl;
	escribirWhile(a,b);

}

void escribir(int numero, string tellMe){
	for(int i=0; i<numero; i++){
		cout<< tellMe<<" : " << " Vez "<<i+1 << endl;
	}
}

void escribirWhile(int numero, string tellMe){
	int i=0;
	while(i<numero){
		cout<< tellMe<<" : " << " Vez "<<i+1 << endl;
		i++;
	}
}