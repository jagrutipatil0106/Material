#include <iostream>
using namespace std;
int main()
{
	int row_n;
	int column_n;
	int row;
	int column;

	cout<<"Enter the array size of row and column :"<<endl;
	cin>>row_n>>column_n;

	int matrix [row_n][column_n];

	for (int i = 0; i < row_n; ++i)
	{
		for (int i = 0; i < column_n; ++i)
		{
			cin>>matrix[row][column]; 
		}
	
	}
	for (int i = 0; i < row_n; ++i)
	{
		for (int i = 0; i < column_n; ++i)
		{
			cout<<matrix[row][column]<<endl;
		}
	
	}
	

	return 0;
}