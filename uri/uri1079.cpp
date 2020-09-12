#include<iostream>
#include<iomanip>
using namespace std;

int main (void){
	int n;
	cin >> n;
	cout << fixed << setprecision(1); 
	float n1,n2,n3,media;
	for(int i=0; i<n;i++){
		cin >> n1 >> n2 >> n3;
		media = n1*2+n2*3+n3*5;
		cout << media/10 << endl;
	}
	return 0;
}
