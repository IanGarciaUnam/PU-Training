#include <bits/stdc++.h>
using namespace std;

/**
*Ingresar un entero n y escribir todos los enteros entre 
*1 y n
*X={y | 1<=y ^ y<n ^ y%2==0  }
*/
int main(){
	int a;
	cin>> a ;
	for(int i=a; i>1 ; i--){
		if(i%2==0){
		cout<< "El número "<< i << " es par "<<endl;	
		}
	}
}