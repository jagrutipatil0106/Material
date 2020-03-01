#include<iostream>
using namespace std;

void add(){
	int x,y,z,sum;
	cout<<"Pleae enter 3 numbers for Addtion: ";
	cin>>x>>y>>z;

	sum=x+y+z;

	cout<<"Sum= "<<sum<<endl;
	// return void;
}


void sub(){
	int x,y,z,sum;
	cout<<"Pleae enter 3 numbers for Subtraction: ";
	cin>>x>>y>>z;

	sum=x-y-z;

	cout<<"Sub= "<<sum<<endl;
	// return void;
}


int main(){

	int n;
	cout<<"Please enter the number"<<endl;
	cin>>n;

	for(int i=0; i<n; i++){
		add();
		sub();
	}

}

