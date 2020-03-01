//comparison bet two number

#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	

	cout<<endl<<endl;

	if(a > b){
		cout<<a<<" is a bigger one."<<b<<" "<<"is a smaller one"; 
	}
	else{
		cout<<b<<"is a bigger one "<<" "<<endl<<a<<"is a smaller one.";
	}
	return 0;
}