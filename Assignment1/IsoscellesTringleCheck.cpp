//isoscele trinagle

#include<iostream>
using namespace std;
int main(){
	int a = 0;
	int b = 0;
	int c = 0;

	 cout<< " enter yhe side of the trinagle : ";
	 cin>> a >> b >> c;

	 if(a==b || a==c || b==c){
	 	cout<<"true";

	 }
	 else{
	 	cout<<" false";

	 }

	 return 0;
}