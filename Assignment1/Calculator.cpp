#include<iostream>
using namespace std;
int main(){
	float add,sub,mult,div;
	float a ,b;
	char P; 

	cout<<"enter the numbers : ";
	cin>>a>>b;
	

	cout<<"A. Addition\n"<<"B. Substraction\n"<<"C. multification\n"<<"D.division\n"<<endl;
	cout<<"wich action to be perform : "<<endl;
	cin>>P;

	switch(P){
		case 'A':
		add = a + b;
		cout<<"sub : "<<add<<endl;
		break;

		case 'B':
		sub = a - b;
		cout<<"Substraction : "<<sub<<endl;
		break;

		case 'C':
		mult = a * b;
		cout<<"multification : "<<mult<<endl;
		break;

		case 'D':
		div = a / b;
		cout<<"division : "<<div<<endl;

		default:
		cout<<"Choice other than A,B,C and D ."<<endl;
	}	


return 0;
}