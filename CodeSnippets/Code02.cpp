// 

#include <iostream>
using namespace std;

int main(){
	int i=0;
	int j=0;

	// Single & and double && both can be used to signify AND condition
	while(i<5 & j<10){
		i++;
		j++;
	}

	cout<<i<<" "<<j<<endl;

	return 0;
}