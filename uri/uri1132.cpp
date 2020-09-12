#include<iostream>
using namespace std;

int main (void){
	int x,y,cont,tot;
	tot=0;
	cin >> x >> y;
	
	if(x<y){
		for (cont = x;cont<=y;cont++){
			if(cont%13!=0)
				tot+=cont;
		}
	}
	else if(x>y){
		for (cont = y;cont<=x;cont++){
			if(cont%13!=0)
				tot+=cont;
		}
	}
	cout<< tot << endl;
	return 0;
}
