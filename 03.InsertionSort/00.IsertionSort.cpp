#include<iostream>
using namespace std;

#define MAX 10 

int main() { 
	int n, a[MAX], i, j, temp; 
	
	cout<<"Quanti elementi?: "; 
	cin>>n; 
	
	for(i=0;i<n;i++) {
		cout<<"Elemento numero "<<i+1<<": "; 
		cin>>a[i]; 
	}
	
	cout<<"Ordiniamo l'array \n"; 
	for(i=1;i<n;i++) { 
		temp=a[i]; 
                j=i-1; 
		while((a[j]>temp) && (j>=0)) { 
			a[j+1]=a[j]; 
                        j--;
                } 
		a[j+1]=temp; 
		} 
		
		cout<<"Array dopo l'ordinamento: \n"; 
		for(i=0; i<n; i++) 
			cout<<a[i]<<" ";
	
	return 0; 
}
