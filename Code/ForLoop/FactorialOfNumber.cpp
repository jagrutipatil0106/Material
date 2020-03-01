#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int N;
	int factorial;
	cout<<"Enter the number: "<<endl;
	cin>>N;
	factorial=fact(N);
	cout<<"factorial= "<<factorial<<endl;
	return 0;
}	


int fact(int n){
	int fact=1;
	for(int i=1; i<=n; i++){
		fact=fact*i;
	}
	return fact;
}