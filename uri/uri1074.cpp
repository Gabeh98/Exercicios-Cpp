#include<iostream>
using namespace std;

int main (void){
	int n;
	cin >> n;
	int vect[n];
	
	for (int i =0;i<n;i++){
		cin >> vect[i];
		
		if(vect[i]==0)
			cout << "NULL" <<endl;
			
		else if(vect[i]>0){	
			if(vect[i]%2==0)
				cout<< "EVEN POSITIVE"<<endl;
			else
				cout<< "ODD POSITIVE"<<endl;
		}
		else if(vect[i]<0){
			if(vect[i]%2==0)
				cout<< "EVEN NEGATIVE"<<endl;
			else
				cout<< "ODD NEGATIVE"<<endl;
		}				
	}	
	return 0;
}
