#include<iostream>
using namespace std;
int main()
{
	int N;
	cout<<"enter an array element:";
	cin>>N;

	int InputArray1[N];
	int InputArray2[N];
	int InputArray3[N];

	for(int i=0; i<N; i++)
	{
		int num;
		cin>>num;
		InputArray1[i]=num;
	}
	for(int i=0; i<N; i++)
	{
		int num1;
		cin>>num1;
		InputArray2[i]=num1;
	}

	for(int i=0; i<N; i++)
	{
		int sum=0;
		sum=InputArray1[i]+InputArray2[i];
		InputArray3[i]=sum;
	}

	for(int i=0; i<N; i++)
	{
		cout<<InputArray3[i]<<" ";
	}

}