#include <bits/stdc++.h>


using namespace std;

class Palabra{
	/**
*Clase palabra, incluye un string y sus veces repetidas
*
*
*
*/
Palabra(std::string& p);
private :
 string palabra;
 int vez;


public :
	Palabra(string p){
		this -> palabra=p;
		this -> vez=1;
	}



public :
	void setPalabra(string p){
	palabra =p;
	}

	void setVez(int v){
		vez =v;
	}
	string  getPalabra(){
		return palabra;
	}

	int getVez(){
		return vez;
	}
	

};

/**
*
*
*
*
*/
std::string word ;
std::list<Palabra> results; 
bool contiene(std::list<Palabra>, string);
void descompone(string);
int main(){

	std::string text;
	std::map<std::string, int> diccionario;
	do{
		cin>> text;
		descompone(text);
		for(Palabra w: results){
				diccionario.insert(make_pair(w.getPalabra(),w.getVez()));	
		}
		map<string,int>:: iterator it;
		/**for(it = diccionario.begin(); it != diccionario.end(); it++){
			cout<< it -> first << ":"<< it->second << endl;

		}**/

	}while(!cin.eof());
return 0;
}

/**
*Separa las palabras por espacios y las coloca en un vector
*
*
*/
void descompone(string lecture){
	  std::string input = lecture;
	std::istringstream ss(input);
	std::string token;//Deposita cada string separada
	while(std::getline(ss, token, ' ')) {
		
		Palabra palabra(token);
		Palabra* palabra2;
		palabra2= new Palabra(token);

		if(!contiene(results, token)){

			results.push_back(palabra);
		}else{
			palabra.setVez(palabra.getVez()+1);
			results.push_back(palabra);
		}
		delete palabra2;
	}
}

/**
*Verifica si el vector ya contiene ese string
*INcrementa la complejidad en tasas altas
*/
bool contiene(std::list<Palabra> v  ,string w){
	for(Palabra s: v){
		if(s.getPalabra() == w){
			return true;
		}
	}
	return false;
}
