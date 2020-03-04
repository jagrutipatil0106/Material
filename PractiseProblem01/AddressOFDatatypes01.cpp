#include <iostream>
using namespace std;

int main()
{
	int i;
	float f;

	int* ip;
	float* fp;

	ip = &i;
	fp = &f;

	cout<<" ip address :"<<ip<<endl;
	cout<<" fp address :"<<fp<<endl;



	return 0;
}