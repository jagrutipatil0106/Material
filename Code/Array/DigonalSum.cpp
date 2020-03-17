//ProblemStatement:
//find digonal sum in 2 dimensional array.

#include <iostream>
using namespace std;
 int main()
 {
 	int row_n;
 	int column_n;
 	cout<<"Enter the rows and column."<<endl;
 	cout<<"rows :";
 	cin>>row_n;
 	cout<<"column_n :";
 	cin>>column_n;
 	int sum = 0;

 	int matrix[row_n][column_n];

 	for (int i = 0; i < row_n; ++i)
 	{
 		for (int j = 0; j < column_n; ++j)
 		{
 			cin>>matrix[i][j];
 		}
 	}
 
 
	for (int j = 0; j < column_n; ++j)
 	{
 		sum = sum + matrix[j][j];
 	}
 
 cout<<"Sum :"<<sum;


 return 0;
}