// ProblemStatement:
// Converting temprature from farehnheit to celcius.

#include<iostream>
using namespace std;
int main(){
	float F;
	float C;

	cout<<"Enter the temprature in farehnheit :   ";
	cin>>F;

	C=(F-32)/1.8;
	cout<<"C : "<<C;

	return 0;
}
