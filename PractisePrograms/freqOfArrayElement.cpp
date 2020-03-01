#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter size of an array: ";
	cin>>n;
	int arr[n]; 
	int freq=0;
	int repeat=0;

	for(int i = 0;  i < n;  i++){
		cout<<"Enter the number: ";
		cin>>arr[i];
	}

	for(int i = 0;  i < n;  i++){
		
		freq=0,repeat=0;

		for(int j = i;  j < n;  j++){


			if(arr[i]==arr[j]){

				freq++;
			}

			
		}

		for(int k = 0; k < i; k++)
		{
			if(arr[i]==arr[k]){
				repeat=1;
			}
			
				
		}

		if(repeat!=1){
				cout<<"\n\nFrequency of "<<arr[i]<<" is "<<freq<<endl;
			}
	

		
	}

	



	return 0;

}