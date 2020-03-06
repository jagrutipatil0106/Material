#include <iostream>
using namespace std;
int main(){

	for (int i = 0; i < 10; i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	for (int i = 0; i < 10; ++i)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	int i = 0;
	cout<<i++<<endl; // 0 :because this is postincrement oprator.

	int j = 0;
	cout<<++j<<endl; // 1 :because this is preincrement oprator.
	return 0;
}