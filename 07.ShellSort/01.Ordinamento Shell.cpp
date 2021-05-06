#include <iostream>
#include <cstdlib>
using namespace std;

void Shell (float A[], int n){
	int i, j, salto=n/2;
	float aux;
	while (salto>0){					//Ordinamento di 'salto' sottovettori
		for (i=salto; i<n; i++){		//Ordinamento parziale di i vettori 
										//Gli elemeti di ogni vettore stanno a distanza salto
			j=i-salto;
			while (j>=0){
				int k=j+salto;
				if(A[j]<=A[k])	j=-1;	//Elementi contigui del vettore 
				else {
					aux=A[j];
					A[j]=A[k];
					A[k]=aux;
					j=j-salto;
				}
			}
		}
	salto=salto/2;
	}
}

void StampareVettore (float A[], int n){
	for (int i=0; i<n; i++){
		cout<<"["<<A[i]<<"] ";
	}
	cout<<endl;
}

int main(){
	int n;
	cout<<"Inseririsca la dimensione del vettore: ";
	cin>>n;
	float A[n];
	for(int i=0; i<n; i++){
			A[i]=rand()%10;
	}
	cout<<"Vettore originale \n";
	StampareVettore (A, n);
	Shell (A, n);
	cout<<endl<<"Vettore ordinato"<<endl;
	StampareVettore (A, n); 
}
