#include<iostream>

using namespace std;

int main (void){
	int vect[10];
	cin >> vect[0];
	if(vect[0]<=50){
		for(int i=1;i<=10;i++)
			vect[i]=vect[i-1]*2;
	}
	for(int i=0;i<10;i++)
		cout << "N["<< i <<"] = " <<vect[i]<<endl;
	return 0;
}
