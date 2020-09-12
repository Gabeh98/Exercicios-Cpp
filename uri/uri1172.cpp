#include <iostream>

using namespace std;

int main (void){
	int vect[10];
	
	for(int i=0;i<10;i++)
		cin >> vect[i];
		
	for(int i=0;i<10;i++){
		if(vect[i]<1)
			vect[i]=1;
		cout<<"X["<< i <<"] = "<<vect[i]<<endl;
	}
	return 0;
}
