#include<iostream>

using namespace std;

int main (void){
	int N[5],cont;
	
	for(int i=0;i<5;i++){	
		cin >> N[i];
	}
	for(int i=0;i<5;i++){
		if(N[i]%2==0)
			cont++;
	}
	cout << cont << " valores pares" << endl;
	
	return 0;
}
