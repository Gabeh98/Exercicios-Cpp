#include<iostream>
#include<iomanip>
using namespace std;

int main (void){
	
	float x,y,media;
	cout << fixed << setprecision(2);
	cin >> x;
	while(x>10||x<0){
		cout << "nota invalida" << endl;
		cin >> x;
	}
	cin >> y;
	while(y>10||y<0){
		cout << "nota invalida" << endl;
		cin >> y;
	}
	
	media=x+y;
	cout << "media = "<<media/2 << endl;	
	return 0;
}
