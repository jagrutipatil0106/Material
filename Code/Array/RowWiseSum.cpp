#include<iostream>
using namespace std;
int main()
{
	int row_n;
	int column_n;
	int sum;

	cout<<"Enter the size of row an column :"<<" ";
	cin>>row_n;
	cout<<" ";
	cin>>column_n;

	int matrix[row_n][column_n];

	for (int i = 0; i < row_n; ++i)
	{
		for (int j = 0; j < column_n; ++j)
		{
			cin>>matrix[i][j];
		}
	}
	for (int i = 0; i < row_n; ++i)
	{
		sum = 0;
		for (int j = 0; j < column_n; ++j)
		{
			sum = sum + matrix[i][j];
		}
		cout<<"Row wise sum :"<<sum<<endl;
		
	}

	return 0;
}