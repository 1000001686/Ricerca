#include <iostream>
#include <cstdlib>
using namespace std;

void scambio (int& a, int& b){
	int aux; 
	aux=a;	
	a=b;		
	b=aux;	
}

void OrdBolle2 (int a[], int n){
	int i, j;
	bool IndiceScambio;						//Indice dell'ultimo scambio
	i=n-1;									//i è l'indice dell'ultimo elemetno del sottovettore
	while (i>0){							//Contina fino a che non vi sono scambi 
		IndiceScambio=0;					//Si inizializza IndiceScambio a 0
		for (j=0; j<i; j++){				//Attraversa il sottovettore da 0 a i 
			if (a[j+1]<a[j]){				//Scambia e aggiorna IndiceScambio
			scambio (a[j], a[j+1]);
			IndiceScambio=j;
			}
											//i si stabiisce al valore dell'indice dell'ultimo 
											//scambio, continua l'ordinamento del sottovettore
											//da a[0] ad a[i]
			i=IndiceScambio;
		}
	}
}

void StampareVettore (int a[], int n){
	for (int i=0; i<n; i++){
		cout<<"["<<a[i]<<"] ";
	}
	cout<<endl;
}

int main(){
	int n;
	cout<<"Inseririsca la dimensione del vettore: ";
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
			a[i]=rand()%10;
	}
	cout<<"Vettore originale \n";
	StampareVettore (a, n);
	OrdBolle2 (a, n);
	cout<<endl<<"Vettore ordinato"<<endl;
	StampareVettore (a, n); 
}
