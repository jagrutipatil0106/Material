#include <iostream>
using namespace std;
 int main(){

 	int row_n;
 	int column_n;
 	int sum = 0;

 	cout<<"Enter the size of row and column :"<<endl;
 	cin>>row_n>>column_n;

 	int matrix[row_n][column_n];

 	for (int i = 0; i < row_n; ++i)
 	{
 		for (int j = 0; j < column_n; ++j)
 		{	
 			//int sum;
 			cin>>matrix[i][j];
 			sum = sum + matrix[i][j];
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

 	cout<<"sum :"<<sum;

 	return 0;
 }