// ProblemStatement
// Take input from user of 5 subjects and out its Grades.

#include<iostream>
using namespace std;
int main(){

    float phy;
    float chem;
    float bio;
    float math;
    float comp;
    float per, total;

	cout<<"Enter the marks of subject : ";
	cin>>phy>>chem>>bio>>math>>comp;

	total = phy + chem + bio + math + comp;

	// Type Casting to float
	per = (float)((total/500)*100);
	cout<<"percentage: "<<per<<endl;

	if(per >= 90 ){
		cout<<"grade A";
	}
	else if(per >= 80 ){
		cout<<"grade B";
	}
	else if(per >= 70 ){
		cout<<"grade C";
	}
	else if(per >= 60 ){
		cout<<"grade D";
	}
	else if(per >= 40 ){
		cout<<"grade E";
	}
	else{
		cout<<"grade F";
	}


return 0;
}