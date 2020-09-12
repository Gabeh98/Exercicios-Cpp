#include<iostream>
using namespace std;

int main (void){
	int i;

	do{
		cin >> i;
		if(i==2002)
			cout<< "Acesso Permitido"<<endl; 
		else
			cout<< "Senha Invalida" << endl;
	}while(i!=2002);
		
	return 0;
}

