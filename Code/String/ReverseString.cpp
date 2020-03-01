#include<iostream>
#include<cstring>
using namespace std;
int main(){

	string str;
	cout<<"Enter the name: ";
	cin>>str;

	cout<<"Before String: "<<str<<endl;

	int size = sizeof(str);
	cout<<"size: "<<size<<endl;

	int lenght = str.size();
	cout<<"lenght :"<<lenght<<endl;

	int start = 0;
	int end = lenght -1;

	for(int i=0; i<(lenght/2)-1; i++){

		// Method1 (Unoptimized)
		// char leftvalue = str[start];
		// char rightValue = str[end];
		// char temp;

		// temp = leftvalue;
		// leftvalue = rightValue;
		// rightValue = temp;

		// str[start] = leftvalue;
		// str[end] = rightValue;

		// Method 2:
		char temp;
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;

		start = start + 1;
		end = end - 1;
	}

	cout<<"After String: "<<str<<endl;

	return 0;
}
