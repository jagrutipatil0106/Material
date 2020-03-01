#include<iostream>
using namespace std;
int main(){
	int days;
	int Month;
	int D;
	cout<<"Enter days: ";
	cin>>days;

	Month=days/30;
	cout<<"Month : "<<Month<<endl;

	D=days%30;
	cout<<"Days :"<<D;


	return 0;
}