//number searching

#include<iostream>
using namespace std;
int main(){
	
	int n;
	int flag = 0;  
	cout<<"how many elements do you want : ";
	cin>>n;
	
	int arr[n];

	cout<<"elements of array are:"<<endl;

	 for(int i = 0; i < n; i++){
	 	cout<< "number is:";
	 	cin>>arr[i];

	 } 
	 int x;
	 cout<<"enter the number : ";
	 cin>> x ;

	 for(int i = 0; i < n; i++ )
	 {	
	 	if ( arr[i] == x)
	 	{
	 		 flag = 1;
	 	}
	 }
	  if(flag == 1){
	  	cout<<"number is found. ";
	  }
	  else{
	  	cout<<"number is not found.";	  } 
	



	return 0;
}