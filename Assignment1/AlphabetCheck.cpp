#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter the character : ";
	cin>>ch;

	if((ch >='A' && ch <='Z') || (ch >='a' && ch <='z'))
	{
		cout<<"character is alphabet.";
	}
else
{
	cout<<"it is somthing else.";
}
return 0;
}