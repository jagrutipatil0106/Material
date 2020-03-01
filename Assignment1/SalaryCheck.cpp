#include<iostream>
using namespace std;
int main(){
	int basicSal;
	float HRA;
	float DA;
	float grosSal;

	 cout<<"Enter your salary : ";
	 cin>>basicSal;

	 if (basicSal <= 10000)
	 {
	 	HRA = (float)(0.2* basicSal);
	 	DA = (float)(0.8 * basicSal);
	 	cout<<"HRA : "<<HRA;
	 	cout<<"DA : "<<DA;
	 }
	  else if (basicSal <= 20000)
	 {
	 	HRA = (float)(2.5* basicSal);
	 	DA =(float) (0.9 * basicSal);
	 }
	  else (basicSal > 20000);
	 {
	 	HRA = (float)(0.3* basicSal);
	 	DA = (float)(9.5 * basicSal);
	 }
	 
	
	 		grosSal = (basicSal + HRA + DA);

	 		cout<<"GrossSalary : "<<grosSal;
	return 0;
}