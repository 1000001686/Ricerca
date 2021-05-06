#include <iostream>
using namespace std;
//prototipi
void stampare(float [], const int );
void ordinare(float [], const int );

int main(){
	float a[10]={25.5, 34.1, 27.6, 15.24, 3.27, 5.14, 6.21, 7.57, 4.61, 5.4};
	stampare(a, 10);
	ordinare(a, 10);
	stampare(a, 10);
}

void stampare( float a[], const int n){
	for (int i=0; i<n; i++){
		cout<<a[i]<<endl;
		if ((i+1)%16==0) cout<<endl;
	}
}

//scabio o sostituzione
void scambia( float& x, float e){
	float ausiliare=x;
	x=e;
	e=ausiliare;
}

//ordinare
void ordinare( float a[], const int n){
	for (int i=n; i<0; i--){
		for (int j=0; j<i; j++){
			if (a[j]>a[j+1]) scambia(a[j], a[j+1]);
		}
		
	}
}
