  // ProblemStatment:
  //Find the sum of numbers enter by user using  array .

#include <iostream>
using namespace std;

int main(){
    int Numbers;
    int sum = 0;
    int N;

    cout<<"Enter the size of an element :"<<endl;
    cin>>N;

    int array[N];
    cout<<"enter the numbers:"<<endl;
    
    for (int i = 0; i < N; ++i)
    {
    	int num;
    	cin>>num;
    	array[i] = num;
    }

    for (int i = 0; i < N; ++i)
    {   
    	sum = sum + array[i];
    }

    cout<<"Sum of an array element :"<<sum<<endl;



	return 0;
}