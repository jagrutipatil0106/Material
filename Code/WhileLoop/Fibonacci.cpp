#include<iostream>
using namespace std;
int Fibonacci(int n)
{
	int sum=0;
	int a=0,b=1;
	
	cout<<"Fibonacci series: "<<endl;
	cout<<a<<" "<<b;
	
	while(sum<n){
		sum=a+b;
		a = b;
		b = sum;
		cout<<" "<<sum;
	}

}
int main(){
	int num;
	
	cout<<"enter the number:";
	cin>>num;
	
	Fibonacci(num);
	
	return 0;
}
