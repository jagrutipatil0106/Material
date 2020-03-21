#include<iostream>
using namespace std;
int main()
{
	int row_1;
	int column_1;
	int row_2;
	int column_2;
	int matrix[row_1][column_1];
	int matrix[row_2][column_2];

	cout<<"Enter the first matrices number: "<<endl;
	cin>>row_1;
	cin>>column_1;
	cout<<"Enter the 2nd matrices number :"<<endl;
	cin>>row_2;
	cin>>column_2;

	cout<<"Enter 1st matrix elements ."<<endl;

	for (int i = 0; i < row_1; ++i)
	{
		for (int j = 0; j < column_1; ++j)
		{
			cin>>matrix[row_1][column_1]; 
		}
	}
	for (int i = 0; i < row_2; ++i)
	{
			for (int j = 0; j < column_2; ++j)
			{
				cin>>matrix[row_2][column_2];
			}
	}

	 Mult = matrix[row_1][column_1] * matrix[row_2][column_2];

	 cout<<"Multiplication :"<<Mult<<endl;
	return 0;
}