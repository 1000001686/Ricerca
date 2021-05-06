#include <iostream>
#include <cstdlib>
using namespace std;

void OrdBolle (int a[], int n){
	int aux, i, j;
	bool interruttore=true;
	for (i=0; i<n-1&&interruttore; i++){
											//Ciclo esterno che controlla il numero di iterazzioni=i
		interruttore=false; 				//Non è stato ancora fatto alcuno scambio 
		for (j=0; j<n-i-1; j++){
											//Ciclo interno che controlla ogni iterazione 
			if (a[j]>a[j+1]){
											//Elemeti disordinati è necessario uno scambio
				interruttore=true;
				aux=a[j];
				a[j]=a[j+1];
				a[j+1]=aux;							
			}		
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
	OrdBolle (a, n);
	cout<<endl<<"Vettore ordinato"<<endl;
	StampareVettore (a, n); 
}
