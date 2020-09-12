#include<iostream>
#include<iomanip>
using namespace std;

int main (void){
	float number[6],cont,media=0;
		
	for(int i = 0; i < 6; i++)
		cin >> number[i];
	
	for (int i = 0; i < 6; i++){
		if(number[i]>0){
			cont++;
			media+=number[i];
		}
	}
	cout << cont << " valores positivos" << endl;
	cout << fixed << setprecision(1);
	cout << media/cont << endl;
	return 0;
}
