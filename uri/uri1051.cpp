#include<iostream>
#include<iomanip>
using namespace std;

float impost(float n){
	
	if(n<=2000)
		return 0;
	else if(n<=3000)
		return (n-2000)*.08;
	else if(n<=4500)
		return (n-3000)*.18+(1000*.08);
	else
		return (n-4500)*.28+(1000*0.08)+(1500*.18);
}
int main(void){
	
	float salary;
	cin >> salary;
	cout << fixed << setprecision(2);
	if(salary<=2000)
		cout  << "Isento" << endl;
	else		
		cout << "R$ "<<impost(salary)<<endl;;
	
	return 0;
}
