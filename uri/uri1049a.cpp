#include<iostream>

using namespace std;

int main (void){
	
	int n,gas=0,alcool=0,diesel=0;
	cin >> n;
	while(n!=4){
		if(n==1)
			alcool++;
		else if(n==2)
			gas++;
		else if(n==3)
			diesel++;
		cin >> n;	
	}
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alcool <<endl;
	cout << "Gasolina: " << gas <<endl;
	cout << "Diesel: " << diesel <<endl;
	
	return 0;
}
