// 

#include <iostream>
using namespace std;

int main(){
	int i=0;
	int j=0;

	// Below cooma(,) signifies a OR condition
	// Explanation: In C, comma is also operator with least precedence.
	// so if (a,b,c,d) in this list d is picked
	while(i<5, j<10){  
		i++;
		j++;
	}

	cout<<i<<" "<<j<<endl;

	return 0;
}