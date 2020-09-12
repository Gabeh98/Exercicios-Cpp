#include <iostream>
#include <iomanip>
using namespace std; 

int main(void){
	
	float vect[100];
	
	cout << fixed << setprecision(1);
	for(int i=0;i<100;i++){
		cin >> vect[i]; 	
	}
	for(int i=0;i<100;i++){
		if(vect[i]<=10)
			cout <<"A["<< i <<"] = "<<vect[i] << endl;
	}
	
	return 0;
}
