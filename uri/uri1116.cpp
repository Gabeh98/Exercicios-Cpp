#include<iostream>

using namespace std;

int main (void){
	
	int n,x,y;
	cin >> n;

	
	for(int i = 0;i<n;i++){
		cin >> x >> y;
		if(y==0)
			cout <<"divisao impossivel"<< endl;
		else
			cout << (float)x/y << endl;
	}	
	return 0;
}
