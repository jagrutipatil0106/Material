//ProblemStatement:
//find column wise sum in 2 dimensional array.

#include<iostream>
using namespace std;

int main()
{
	int row_n;
	int column_n;

	cout<<"Enter rows and Columns :"<<endl;
	cout<<"rows :";
	cin>>row_n;
	cout<<"Columns :";
	cin>>column_n;
	int sum = 0;

	int matrix[row_n][column_n];

	 for (int i = 0; i < row_n; ++i)
	 {		
	 	sum = 0;
	 	for (int j = 0; j < column_n; ++j)
	 	{
	 		cin>>matrix[i][j];
	 	}
	 }
	 for (int j = 0; j < column_n; ++j)
	 {
	 	sum = 0;
	 	for (int i = 0; i < row_n; ++i)
	 	{
	 		sum = sum + matrix[i][j];
	 	}
	 	cout<<"Sum :"<<sum<<endl;
	 }

	return 0;
}