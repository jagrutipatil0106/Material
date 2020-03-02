  // Wap Given an array of integers, find the sum of its elements.s

#include<iostream>
using namespace std;

int main(){

	int N;
	cout<<"Enter the number N: ";
	cin>>N;

	int array[N];

	for(int i=0; i<N; i++){
		int num;
		cin>>num;
		array[i]=num;
	}


	for(int i=0; i<N; i++){
		cout<<array[i]<<" ";

	}cout<<endl;


	int sum = 0;
	for(int i=0; i<N; i++){
		sum = sum + array[i];
	}
	cout<<"Sum of array elements: "<<sum;

	return 0;
}
	
