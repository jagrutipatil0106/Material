#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter the character.:";
	cin>>ch;

	if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
	{
		cout<<ch<<"it is alphabet.";
	}
	else if (ch >= '0' && ch <= '9'){
		cout<<ch<<"it is digit.";
	}
	else{
		cout<<ch<<"is a special character.";
	}
	return 0;
}	