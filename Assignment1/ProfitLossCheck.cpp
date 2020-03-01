#include<iostream>
using namespace std;
int main(){
	int basePrice;
	int sellingPrice;

	cout<<"enter the basePrice : ";
	cin>> basePrice;
	cout<<"enter the sellingPrice : ";
	cin>> sellingPrice;

	if(basePrice < sellingPrice){
		cout<< "profit ";

	}
	else{
		cout<<" loss ";
	}

	return 0; 
}