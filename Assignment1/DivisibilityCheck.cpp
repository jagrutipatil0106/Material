//number is divisible by 5 & 11 or not

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number : ";
	cin>>n;

	if (n % 5 == 0  &&  n % 11 == 0) 
	{
		cout<<"number is divisible by 5 & 11.";	
	}
	else{
		cout<<"it is not divisible.";
	}

	return 0;
}