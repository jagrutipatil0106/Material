#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	int AngleOfTRingle;

	cout<<" enter the angles of tringle : ";
	cin>>a>>b>>c;

	if(a + b + c == 180)
	{
		cout<<"tringle is valid";
	}
	else{
		cout<<"tringle is not valid";
	}




	return 0;
} 