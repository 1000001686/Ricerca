#include <iostream>
#include <cstdlib>
using namespace std;

void OrdInserimento (int a[],int n){
/*
	int i,j;
	for (i=1; i<n; i++){					//i identifica il sottovalore di a[0] diviso a[i]
							
											//indice, j attravesa il vettore da a[i] cercando 
											//la posizione corretta dell' elemento
											//destinazione, lo assegna ad a[j]
		j=i;
											//Si localizza il punto di inserimento attraversando 
											//verso il basso finché a[i]<a[j-1] e non si 
											//ragiunge l'inizio del vettore
		while (j>0&&a[i]<a[j-1]){			//Sposta gli elementi 
			a[j]=a[j-1];
			j--;
	}
	a[j]=a[j-1];
	}
*/
	int aux, i, j;
	for(i=1;i<n;i++) {
		aux=a[i]; 
        j=i-1; 
		while((a[j]>aux) && (j>=0)) { 
			a[j+1]=a[j]; 
            j--;
        } 
		a[j+1]=aux; 
	} 
}

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
	OrdInserimento (vettore, Dim);
	cout<<endl<<"Vettore ordinato"<<endl;
	StampareVettore (vettore, Dim); 
}
