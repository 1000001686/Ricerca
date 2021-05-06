#include<iostream>
#define Dim 10

using namespace std;
 
int main()
{
	//inserimento degli elementi
	int A[Dim], temp;
	cout<<"Inserisci gli elementi:\n"; 
	for(int i=0; i<Dim; i++){
		cin>>A[i];
	}
	
	//ordino gli elementi		
	for(int j=0; j<Dim-1; j++){
		for(int i=0; i<Dim-1; i++){
			if(A[i]>A[i+1])
			{
				temp=A[i];
				A[i]=A[i+1];
				A[i+1]=temp;
			}	
		}	
	}
	cout<<"Array ordinato con bubble sort:";
	for(int i=0; i<Dim; i++){
		cout<<" "<<A[i];
	}
	return 0;
}

