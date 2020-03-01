//find second largest number in an array element

#include<iostream>
using namespace std;
int main(){

	  int n;
	  cout<<"Enter size of an array: ";
	  cin>>n;
	  int arr[10];

	  for (int i = 0; i < n; i++)
	  {
	  	cout<<"enter numbers : ";
	  	cin>>arr[i];
	  }

	  for (int i = 0; i < n; i++)
	  {
	  	cout<<arr[i];
	  }
	  cout<<endl;

	  int secondlarge = 0;
	  int large = 0;

	  for(int i = 0 ;  i < n ; i++){

	  		if(arr[i] > large ){
	  			secondlarge =large;
	  			large = arr[i];
	  			

	  		}

	  		if (arr[i] > secondlarge && arr[i]< large){
	  			secondlarge = arr[i];
	  		}
	  }

	  cout<<"second large number is: "<<secondlarge<<" "	;

	  return 0;
} 