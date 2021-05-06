#include <iostream>
#include <cstdlib>
using namespace std;
//Scambia i vetori di due variabili intere a e b.
void Scambio (int& a, int& b){
	int aux; 
	aux=a;		//Immagazzina valore originale di a
	a=b;		//Rimpiazza a con b
	b=aux;		//Assegna a b il valore originale di a
}
//Ordina gli elementi dell'Array di imteri in ordine 
//Crescente 
void OldScambio (int a[], int n){
										//IL LIBRO DICE POLPETTE
	for (int i=0; i<n; i++){			//Compie n-1 iterazioni 
		for (int j=0; j<n; j++){		//Colloca in a[i] il minore fra a[i+1]...a[n-1]
			if (a[i]<a[j])
				Scambio (a[i], a[j]);	//Scambia se a[i]>a[j]
		}
	}
}
//Stampare il vettore in ordine crescente 
void StampareVettore (int a[], int n){
	for (int i=0; i<n; i++){
		cout<<"["<<a[i]<<"] ";
	}
	cout<<endl;
}

int main(){
	int Dim;
	cout<<"Inseririsca la dimensione del vettore: ";
	cin>>Dim;
	int vettore[Dim];
	for(int i=0; i<Dim; i++){
			vettore[i]=rand()%10;
	}
	cout<<"Vettore originale \n";
	StampareVettore (vettore, Dim);
	OldScambio (vettore, Dim);
	cout<<endl<<"Vettore ordinato"<<endl;
	StampareVettore (vettore, Dim); 
}


