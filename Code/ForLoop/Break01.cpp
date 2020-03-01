// 

#include <iostream>
using namespace std;

int main(){

	for(int i=0; i<10; i++){
		cout<<"In for loop"<<endl;

		if(i%2 == 0){
			cout<<"inside IF"<<endl;			
			break;
			//THIS break will break for loop
		}

		cout<<"i is: "<<i<<endl;
	}	

	return 0;
}