#include<iostream>
using namespace std;
int main(){
	int Amount;
	int count=0;

	cout<<"Enter the amount.";
	cin>>Amount;

	int notes2000 = Amount / 2000;
	Amount = Amount % 2000;

	int notes500 = Amount / 500;
	Amount = Amount % 500;

	int notes200 = Amount / 200;
	Amount = Amount % 200;

	int notes100 = Amount / 100;
	Amount = Amount % 100;

	int notes50 = Amount / 50;
	Amount = Amount % 50;

	int notes20 = Amount / 20;
	Amount = Amount % 20;

	int notes10 = Amount / 10;
	Amount = Amount % 10;

	int notes5 = Amount / 5;
	Amount = Amount % 5;

	int notes2 = Amount / 2;
	Amount = Amount % 2;

	int notes1 = Amount / 1;
	Amount = Amount % 1;

	cout<<"2000 note : "<<" "<<notes2000<<endl;
	cout<<"500 note : "<<" "<<notes500<<endl;
	cout<<"200 note : "<<" "<<notes200<<endl;
	cout<<"100 note : "<<" "<<notes100<<endl;
	cout<<"50 note : "<<" "<<notes50<<endl;
	cout<<"20 note : "<<" "<<notes20<<endl;
	cout<<"10 note : "<<" "<<notes10<<endl;
	cout<<"5 note : "<<" "<<notes5<<endl;
	cout<<"2 note : "<<" "<<notes2<<endl;
	cout<<"1 note : "<<" "<<notes1<<endl;

	return 0;
}
