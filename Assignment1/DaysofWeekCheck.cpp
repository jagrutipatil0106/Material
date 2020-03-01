//enter the number and day will be printed.

#include<iostream>
using namespace std;
int main() {
	int day;
	int D;

	cout<<"Enter day : ";
	cin>>day;

	D = day % 7;

	switch(D){
		case 0:
		cout<<"Monday";
		break;

		case 1:
		cout<<"Tuesday";
		break;

		case 2:
		cout<<"Weday";
		break;

		case 3:
		cout<<"thursday";
		break;

		case 4:
		cout<<"friday";
		break;

		case 5:
		cout<<"satday";
		break;

		case 6:
		cout<<"sunday";
		break;
	}


	return 0;
}




