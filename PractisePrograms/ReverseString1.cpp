#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string name;
	int i=0;
	
	cout<<"Enter the name: "<<endl;
	cin>>name;

	// cout<<"Name before reverse:"<<name<<endl;
	while(name[i]!='\0')
	{
		i++;
	}
	cout<<"length of string:"<<" "; 
	
	cout<<i;

	string rev;
	int j=0;
	while(i>=0)
	{
		rev[j]=name[i];
		// cout<<'p';//rev[j]<<'\n';
		j++;
		i--;
	}
	// rev[j]='\0';
	cout<<rev<<endl;

	return 0;

}