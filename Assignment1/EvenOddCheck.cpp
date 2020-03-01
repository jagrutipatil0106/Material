//number is even or odd.

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number :  ";
	cin>>n;

	if(n % 2 == 0){
		cout<<"Number is Even.";
	}
	else{
		cout<<"number is Odd.";
	}

	return 0;
}