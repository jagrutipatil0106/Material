#include <iostream>
using namespace std;

int functionSum(int n){
	// Base Condition
	if (n==0){
		return 0;
	}
	else{
		return n + functionSum(n-1);
	}
};


int main(){

	int N;
	cin>>N;

	cout<<"Sum of N numbers: "<<functionSum(N)<<endl;

	return 0;
}