#include <iostream>
using namespace std;
int main()
{
	int row_n;
	int column_n;

	cout<<"Enter the array size of row and column :"<<endl;
	cin>>row_n>>column_n;

	int matrix [row_n][column_n];

	for (int i = 0; i < row_n; ++i)
	{
		for (int j = 0; j < column_n; ++j)
		{
			cin>>matrix[i][j]; 
		}
	
	}
	for (int i = 0; i < row_n; ++i)
	{
		for (int j = 0; j < column_n; ++j)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}

	matrix[1][1]=100;
	matrix[1][4]=50;

	return 0;
}