#include <iostream>
#include <cstdlib>
using namespace std;

void Scambio (int& a, int& b){
	int aux; 
	aux=a;		//Immagazzina valore originale di a
	a=b;		//Rimpiazza a con b
	b=aux;		//Assegna a b il valore originale di a
}

void OldScambio (int a[][], int n, int m){	
	for (int i=0; i<n; i++){			 
		for (int j=0; j<n; j++){
			if (a[i]<a[j])
				Scambio (a[i], a[j]);
		}
	}
}

void StampareVettore (int a[][], int n, int m){
	for(int i=0; i<n; i++){
		cout<<endl;
		for(int j=0; j<m; j++){
			cout<<"["<<a[i][j]<<"]";
		}
	}
}

int main(){
	int n,m;
	cout<<"inserire il numero delle righe ";
	cin>>m;
	cout<<"inserire il numero delle colonne ";
	cin>>n;
	int a[n][m];
	for(int i=0; i<n; i++){
		cout<<endl;
		for(int j=0; j<m; j++){
			a[i][j]=rand()%10;
			cout<<"["<<a[i][j]<<"]";
		}
	}
	cout<<"Vettore originale \n";
	StampareVettore (a, n, m);
	OldScambio (a, n, m);
	cout<<endl<<"Vettore ordinato"<<endl;
	StampareVettore (a, n, m); 
}

