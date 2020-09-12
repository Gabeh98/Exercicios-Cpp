#include<iostream>
using namespace std;

int main (void){
	int x,y,cont=0;
	cin>>x>>y;
	
	if(x<y){
		for(x=x+1;x<y;x++){
			if(x%2==1||x%2==-1)
				cont+=x;
		}
	}
	if(y<x){
		for(y=y+1;y<x;y++){
			if(y%2==1||y%2==-1)
				cont+=y;
		}
	}
	cout << cont<< endl;	
	
	return 0;
}
