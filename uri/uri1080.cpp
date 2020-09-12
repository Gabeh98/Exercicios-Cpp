#include<iostream>
using namespace std;

int main (void){
	int n[100],cont=0,cont2=0;

	for(int i = 0; i<100;i++){		
		cin >> n[i];
		if(n[i]>cont ){
			cont = n[i];
			cont2= i;
		} 
	}
	cout << cont << endl;
	cout << cont2+1 << endl;
	return 0; 
}
