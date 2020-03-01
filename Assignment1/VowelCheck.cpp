	
#include<iostream>
int main(){
using namespace std;

char ch;
cout<<"Enter the chracter : ";
cin>>ch;

if(ch == 'a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch == 'A'|| ch=='E' ||ch=='I'||ch=='O'||ch=='U')
{
	cout<<ch <<" "<<"is a vowel";
}
else{
	cout<<ch <<" "<<"is a consonant";
}

return 0;
}