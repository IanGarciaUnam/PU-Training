#include<bits/stdc++.h>

using namespace std;


bool encuentra(string, string);

/**
*Recibe una serie de strings y verifica que se encuentre x palabra
*
*
*
*/
int main(){
string input;
do{
	cin >> input;
if(encuentra(input, "PU++")){
	cout<< "Sí\n";
	return 0;
	}
}while(!cin.eof());

cout<< "No\n";

return 0;
}



/**
*Analiza caracter por caracter y verifica que
*sigan el orden adecuado 
*@param text texto de donde se busca
*@param key paabra que se busca
*/
bool encuentra(string text, string key){
int j=1;
	for(int i=0; i< text.size(); i++){
		if(text[i] == key[0]){
			while(j+i< text.size() && j<key.size() && text[i+j]== key[j]){
				j++;
				}
				return j==key.size();
			}
			
		}
		return false;
	}
	
