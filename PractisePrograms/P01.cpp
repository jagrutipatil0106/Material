//integers, a and b (obtained by the user) and will perform the division a/b,
//store the result in another integer c and show the result of the division using cout. 
//In a similar way, extend the program to add, subtract, multiply, do modulo and power using integers a and b. 
//Modify your program so that when it starts, it asks the user which type of calculation it should do, then asks 
//for the 2 integers, then runs the user selected calculation and outputs the result in a user friendly formatted manner. 
	//solution #1

#include <iostream>
using namespace std;
int main()
{
	char calculater;
	cout<<"1.addition"<<endl<<"2.substraction"<<endl<<"3.multiplication"<<endl<<"4.division"<<endl; 
	cout<<"Enter number wich operation do you want to perform :"<<endl;
	cin>>calculater;
	float A,B,C;
	//cout<<"Enter two numbers :"<<endl;
	//cin>>A>>B;
	int N;
	cout<<"Enter the number :";
	cin>>N;

	
	int add,num;

	switch(calculater){
		
		case '1': C = A + B;
		cout<<"addition :"<<C;
		cout<<"Enter the numer :";
		for (int i = 0; i < N; ++i)
		{
			add = add + num;
		}
		cout<<"Add :"<<add;
		break;

		case '2': C = A - B;
		cout<<"substraction :"<<C;
		break;
		
		case '3': C = A * B;
		cout<<"multiplication :"<<C;
		break;
		
		case '4': C = A / B;
		cout<<"division :"<<C;
		break;

		return 0;

}
	



	return 0;
}