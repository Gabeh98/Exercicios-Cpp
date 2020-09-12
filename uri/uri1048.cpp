#include<iostream>
#include<iomanip>

using namespace std;

int main (void){
	float salary;
	
	cin >> salary;
	cout << fixed << setprecision(2);
	if(salary<=400.00&&salary>0){
		cout << "Novo salario: " << salary*.15+salary <<endl;
		cout << "Reajuste ganho: " << salary*.15 <<endl;
		cout << "Em percentual: 15 %" << endl; 
	}
	else if(salary>=400.01&&salary<=800.00){
		cout << "Novo salario: " << salary*.12+salary << endl;
		cout << "Reajuste ganho: "<< salary*.12 << endl;
		cout << "Em percentual: 12 %"<< endl;
	}
	else if (salary>=800.01&&salary<=1200.00){
		cout << "Novo salario: " << salary*.10+salary << endl;
		cout << "Reajuste ganho: " << salary*.10 << endl;
		cout << "Em percentual: 10 %"<< endl;
	} 
	else if (salary>=1200.01 && salary <=2000.00){
			
		cout << "Novo salario: " << salary*.07+salary << endl;
		cout << "Reajuste ganho: " <<salary*.07 << endl;	
		cout << "Em percentual: 7 %" << endl;	
	}
	else{
		cout << "Novo salario: " << salary*.04 + salary << endl;
		cout << "Reajuste ganho: " << salary*.04 << endl;
		cout << "Em percentual: 4 %" << endl;			
	}
	
	return 0;
}
