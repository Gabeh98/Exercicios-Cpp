#include<iostream>
#include<iomanip>
using namespace std;

int main (void){
	float a,b,media,n;
	cout<< fixed << setprecision(2);
	
	while(true){
		cin >> a;
		while(a<0||a>10){
			cout << "nota invalida" << endl;
			cin >> a;
		}
		cin>>b;
		while(b<0||b>10){
			cout<< "nota invalida" << endl;
			cin >> b;
		}
		media = a + b;
		cout <<"media = " <<media/2 << endl;
		do{
		cout<<"novo calculo (1-sim 2-nao)"<<endl;
		cin >> n;
		if(n==2)
			return 0;
		else if(n==1)
			break;
		}while(true);
	}	
	return 0;
}
