// 

#include <iostream>
using namespace std;

int main(){
	int i=0,j=0;
	for(i=0; i<5; i++){
		for(j=0; j<1;){
			cout<<"inside j loop"<<endl;
			break;     
			//break terminate the current loop
			cout<<"inside j loop after break"<<endl;
		}
		cout<<"sdhfbs"<<endl;
	}	

	return 0;
}