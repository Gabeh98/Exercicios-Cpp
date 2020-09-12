#include<iostream>

using namespace std;

int main (void){
	float number[6],cont;
		
	for(int i = 0; i < 6; i++)
		cin >> number[i];
	
	for (int i = 0; i < 6; i++){
		if(number[i]>0)
			cont++;
	}
	cout << cont << " valores positivos" << endl;
}
