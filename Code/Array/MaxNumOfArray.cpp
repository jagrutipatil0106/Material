#include<iostream>
using namespace std;
int main()
{
	int N;
	int max;
	cout<<"enter size of an array:";
	cin>>N;

	int array[N];

	cout<<"enter an array elements:";
	for(int i=0; i<N; i++){
		cin>>array[i];		
	}
	
	max=array[0];
	for(int i=0; i<N; i++){
		
		if(max > array[i])
		{
			max=array[i];
		}
	}
	cout<<max;
}