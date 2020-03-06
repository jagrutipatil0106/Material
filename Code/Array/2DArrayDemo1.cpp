 // Accept row and column size from the user. 
// Create a 2D array from accepted row and column size and display it.
// Find row-wise highest element from 2D array.

# include<iostream>
using namespace std;
int main()
{
	int row_n;
	int column_n;
	cout<<"Enter rows and columns:"<<endl;
	cin>>row_n>>column_n;

	int matrix[row_n][column_n];

	for(int row=0; row<row_n; row++){
		for(int col=0; col<column_n; col++){
			// cout<<row<<" "<<col<<endl;
			cin>>matrix[row][col];
		}
	}


	for(int row=0; row<row_n; row++){
		for(int col=0; col<column_n; col++){
			// cout<<row<<" "<<col<<endl;
			cout<<matrix[row][col]<<" ";
		}
		cout<<endl;
	}

	// Sum of all the elements.
	int sum=0;
	for(int row=0; row<row_n; row++){
		for(int col=0; col<column_n; col++){
			// cout<<row<<" "<<col<<endl;
			// cout<<matrix[row][col]<<" ";
			sum = sum + matrix[row][col];
		}
	}
	cout<<"Sum: "<<sum<<endl<<endl;


	// Row wise sum.
	
	for(int row=0; row<row_n; row++){
		sum=0;
		for(int col=0; col<column_n; col++){
			sum=sum+matrix[row][col];
		}
		cout<<"sum="<<sum<<endl;
	}

	return 0;
}