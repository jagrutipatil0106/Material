// ProblemStatement
// Calculate Avrage of n numbers entered by user.

#include<iostream>
using namespace std;
int main(){
	int n;
	float sum=0;
	float Avg=0;

	cout<<"How many number do you want to calculate : "; 
	cin>>n;

	for(int i=0, number=0; i<n; i++){
		cout<<"Enter the number : ";
		cin>>number;
		sum=sum+number;
	}

	cout<<"Sum : "<<sum<<endl; 
	Avg= sum / n;
	cout<<"Avg : "<<Avg<<endl;

	return 0;
}