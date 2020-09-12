#include<iostream>

using namespace std;

int main (void){
	
	int n,in=0,out=0;
	cin >> n;
	int x[n];

	for(int i=0; i<n; i++)
		cin >> x[i];
			
	for(int i=0;i<n;i++){
		if(x[i]>=10&&x[i]<=20)
			in++;	
		else
			out++;
	}
	
	cout << in << " in" << endl;
	cout << out << " out" << endl; 
	
	return 0;
}
