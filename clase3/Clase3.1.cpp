#include <bits/stdc++.h>
using namespace std;


/**
*Recibe dos char  regresa la distacia entre ellos según el
*alfabeto anglosajón
*
*
*
*/


int main(){
char a, b;
cin >> a >> b ;

int r= a - b;
if(r<0){
	r*=-1;
}
cout <<  r << endl;
return 0; 
}