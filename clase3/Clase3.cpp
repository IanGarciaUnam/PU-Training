#include <bits/stdc++.h>
using namespace std;


/**
*Recibe tres opiniones númericas
*EL primero tiene más valia que le segundo y tercero
*
*
*/


int main(){
int a, b, c;
cin >> a >> b >> c;

if(a>0&&(b>0||c>0 )){
	cout << "Aprobado" << endl;
	return 0;
}

cout<< "Rechazado" << endl;

return 0;
}