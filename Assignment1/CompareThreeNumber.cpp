//comparison between three numbers

#include<iostream>
using namespace std;
int main(){
	int a,b,c;

	cout<<"enter three numbers";
	cin>>a>>b>>c;

	if(a > b){ 
		if(a > c){  //This if is Nested-if.
			cout<<a<<"is a greatest.";
		}
		else{
			cout<<c<<"is a greatest.";
		}
	}	
	else{
		if(b > c){
			cout<<b<<"is a greatest.";
		}
		else{
			cout<<c<<"ia a greatest.";
		}
		
	}

	return 0;
	
}