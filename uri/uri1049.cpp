#include<iostream>

using namespace std;
int main (void){
	int n,gas=0,alcool=0,diesel=0;
	cin >> n;
	while(n>4||n<1)
		cin >> n;
	do{	
		switch(n){
			case 1:
				diesel++;
				break;
			case 2:
				alcool++;
				break;
			case 3:
					gas++;
				break;
			case 4:
				cout << "MUITO OBRIGADO" << endl;
				return 0;
		}
		cout << "Alcool: " << alcool <<endl;
		cout << "Gasolina: " << gas <<endl;
		cout << "Diesel: " << diesel <<endl;
		cin >> n;			
	}while(true);
	
	return 0;
}
