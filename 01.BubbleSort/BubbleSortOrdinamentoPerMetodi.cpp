#include <iostream>
using namespace std;
void ordinareBol (int lista[], int n){
//lista[], parametro di input/ output 
//n, parametro di input, numero di elementi	
	int i;
	int passo;			//Numero di interazioni a traverso l'array 
	int aux;			//variabile ausiliare utilizzata nello scambio
	int ordinato;		//variabile che indica se l'ordine è corretto
	
	passo=1;
	do{
		//si suppone che l'array sia ordinato finché
		//si trova una coppia disordinata	
		ordinato=1;
		//realizza un'interazione sugli elenìmenti disordinati 
		for ( i=0; i<n-passo; i++){
			if (lista[i]>lista[i+1]){
			//scambio di coppie di variabili disordinate
				aux=lista[i];
				lista[i]=lista[i+1];
				lista[i]=aux;
				ordinato=0;
			}
		}
		passo++;
	}while(!ordinato);
}

int main(){

}

