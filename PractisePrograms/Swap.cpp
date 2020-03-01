#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int temp;

	cout<<"Enter two numbers: ";
	cin>>a>>b;

	temp=a;
	a=b;
	b=temp;

	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;

	return 0;
}