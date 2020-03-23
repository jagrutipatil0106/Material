//integers, a and b (obtained by the user) and will perform the division a/b,
//store the result in another integer c and show the result of the division using cout. 
//In a similar way, extend the program to add, subtract, multiply, do modulo and power using integers a and b. 
//Modify your program so that when it starts, it asks the user which type of calculation it should do, then asks 
//for the 2 integers, then runs the user selected calculation and outputs the result in a user friendly formatted manner. 
	//solution #1

#include<iostream>
using namespace std;
int main()
{
	int N ;
	int arr[N];
	int b = 0;
	cout<<"jsdfsdj";

	cout<<"Enter the array count :";
	cin>>N;

	for (int i = 0; i < N; ++i)
	{
		cin>>arr[i];
		if (arr[i]>=10)
		{
			b++;
		}
	}
	cout<<"The number of integers greater than 10 is : "<<b;


	return 0;
}
