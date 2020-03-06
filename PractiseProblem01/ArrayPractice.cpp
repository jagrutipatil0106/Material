#include <iostream>
using namespace std;
 int main()
 {
 	int N;
 	cout<<"enter the size of an array element :"<<endl;
 	cin>>N;

 	int array[N];
 	for (int i = 0; i < N; ++i)
 	{
 		cout<<"Enter the number :"<<endl;
 		cin>>array[i];
 	}
 	

 	return 0;
 }