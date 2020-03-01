#include<iostream>
using namespace std;
int main(){
	int Amount;
	int count=0;

	cout<<"Enter the amount.";
	cin>>Amount;

	if(Amount >= 2000){
		count = Amount / 2000;  // Finding 2000 notes
		Amount = Amount % 2000; // Finding remaining amount
		cout<<"2000 note : "<<" "<<count<<endl;
	}

	count=0;	
	if (Amount >= 500){
		count =  Amount/ 500;
		Amount = Amount % 500;
		
		cout<<"500 note : "<<" "<<count<<endl;
	}
  
  count=0;
  	if (Amount >= 200){
		count = Amount / 200;
		Amount = Amount % 200;
		
		cout<<"200 note : "<<" "<<count<<endl;
	}
	count=0;
	
	if (Amount >= 100){
		count = Amount / 100;
		Amount = Amount % 100;
		
		cout<<"100 note : "<<" "<<count<<endl;
	}
	count=0;

	if (Amount >= 50){
		count = Amount/ 50;
		Amount = Amount % 50;
		
		cout<<"50 note : "<<" "<<count<<endl;
	}
	count=0;

	if (Amount >= 20){
		count = Amount / 20;
		Amount = Amount % 20;
		
		cout<<"20 note : "<< " "<<count<<endl;

	}
	count=0;

	if (Amount >= 10){
				count = Amount / 10;
		Amount = Amount % 10;

		cout<<"10 note : "<<" "<<count<<endl;
	} 
	count=0;

	if (Amount >= 5){
		count = Amount / 5;
		Amount = Amount % 5;
		
		cout<<"5 note : "<<" "<<count<<endl;
	}
	count=0;

	if (Amount >= 2){
		count = Amount / 2;
		Amount = Amount % 2;
		
		cout<<"2 note : "<< " "<<count<<endl;
	}
	count=0;

	if (Amount >= 1){
		count = Amount / 1;
		Amount = Amount % 1;
		
		cout<<"1 note : "<<" "<<count<<endl;
	}
	count = 0;
	
	return 0;
}
