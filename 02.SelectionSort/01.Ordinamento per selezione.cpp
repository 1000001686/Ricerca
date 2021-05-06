#include <iostream>
#include <cstdlib>
using namespace std;

void selezione (float a[],int n){
	int i,j, indice_min;
	float aux;
	for (i=0; i<n; i++){
		indice_min=i;					//Posizione del minore
		 for(j=i+1;j<n;j++){	
		 	if (a[j]<a[indice_min])
				indice_min=j;			//Nuova posizione del minore
		 }
		aux=a[indice_min];				//Scambia le posizioni 
		a[indice_min]=a[i];
		a[i]=aux;
	}
}

void StampareVettore (float a[], int n){
	for (int i=0; i<n; i++){
		cout<<"["<<a[i]<<"] ";
	}
	cout<<endl;
}

int main(){
	int Dim;
	cout<<"Inseririsca la dimensione del vettore: ";
	cin>>Dim;
	float vettore[Dim];
	for(int i=0; i<Dim; i++){
			vettore[i]=rand()%10;
	}
	cout<<"Vettore originale \n";
	StampareVettore (vettore, Dim);
	selezione (vettore, Dim);
	cout<<endl<<"Vettore ordinato"<<endl;
	StampareVettore (vettore, Dim); 
}
