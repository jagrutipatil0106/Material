//ProblemStatement:
//print an array in descending order.

#include<iostream>
using namespace std;
int main()
{
	int N;
	int temp;

	cout<<"Enter the count of an array : "<<endl;
	cin>>N;


	int arr[N];

	for (int i = 0; i < N; ++i)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < N; ++i)
	{
		cout<<arr[i]<<" ";
	}
	for (int i = 0; i < N; ++i)
	{
		for(int j = i+1; j < N; ++j)
		{
		if (arr[i] < arr[j]) //here j is i+1 means it is at 1th position
			                 //and i is at 0 th position so they can 
			                 //compare themselves.
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] =temp;
		}
	    }
	    cout<<endl;
	    cout<<arr[i]<<" ";
	}

	

	return 0;
}