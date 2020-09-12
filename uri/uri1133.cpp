#include <iostream>
using namespace std;

int main (void){
	int x,y,cont;
	cin >> x >> y;
	
	if(x>y){
		for(cont = y+1;cont<x;cont++){
			if(cont%5==2||cont%5==3)
				cout<< cont<< endl;
		}
	}
	else if(x<y){
		for(cont = x+1 ;cont < y;cont++){
			if(cont%5==2||cont%5==3)
				cout<< cont<< endl;
		
		}
	}
	
		
	return 0;
}
