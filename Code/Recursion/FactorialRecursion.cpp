#include <iostream>
using namespace std;
int factorial(int n){
	int fact;
	if(n!=0){
	 	
		fact=n*factorial(n-1); //recursion:by callin same function itself.
	}
	return fact; 

}
int main(){
	int num;
	int fact;
	cout<<"enter the number:";
	cin>>num;
	fact=factorial(num);
	cout<<"factorial is: "<<fact;

 return 0;
}