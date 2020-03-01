#include <iostream>
using namespace std;
int main()
{
 int a,b;
 cout<<"Enter two numbers:";
 cin>>a>>b;
 int large;

 if(a>b)
 {
 	large=a;
 }
 else
 {
 	large=b;
 }

 int gcd;
 for (int i = 1; i < large; i++)
 {
 	if(a%i==0 && b%i==0)
      {
      	gcd=i;
      }
 }
	cout<<gcd;
	return 0;
}