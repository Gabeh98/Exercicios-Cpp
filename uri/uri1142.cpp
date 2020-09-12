#include<iostream>
using namespace std;

int main(void){
	int n,cont=1;
	cin >> n;
	for(int i = 0; i < n; i++){
		for (int j = 0;j<4;j++){
			if(cont%4==0){
				cout << "PUM"<<endl;
			}
			else
				cout <<cont++<<" ";
		}
		cont++;
	}
	return 0;
}
