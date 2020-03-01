#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char name[20];
	int length;
	 cout<<"Enter the name: ";
	 cin>>name;

	 length=strlen(name);
	 cout<<length;
	 	 for (int i = length-1; i >= 0; i--)
		 	 {
		 	 	cout<<name[i];
	 	 	/* code */
	 	 }
	 	 cout<<name[0];
	
	return 0;
}