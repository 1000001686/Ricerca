#include <iostream>
using namespace std;

void InserimentoBinario (int A[], int n){
	int i,j,sinistra,destra,centro;
	for (i=0; i<n; i++){
		sinistra=0;
		destra=i-1;
		while (sinistra<=destra)		//Ricerca binaria senza interruzione 
		{
			centro=(sinistra+destra)/2;
			if (A[centro]>A[i])			destra=centro-1; 
			else 						sinistra=centro+1;
		}
		for (j=i-1; j>=sinistra; j--)	//Sposta i dati verso sinistra
		{
			A[j+1]=A[j];
		}	
		A[sinistra]=A[i];
	}
}

int main(){

}
