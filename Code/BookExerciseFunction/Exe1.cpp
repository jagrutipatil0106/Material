#include <iostream>

using namespace std;

float fehrenhite_to_celicus (float f)
{
 	float c;
 	c = (5/9)*(f-32);
 	return c; 
}

float celius_to_fehrenhite (float c)
{

 	float f;
 	f = ((9/5)*c)+32;
 	return f;
 } 
 
 int main()
 {
 	float i;
 	float t;
 	char type;
 	
 	cout<<"Enter the temperature ";
 	cin>>t;
 	cout<<"Enter the temperature type ";
 	cin>>type;


 	if(type == 'C'){
 		i=celius_to_fehrenhite(t);
 	}
 	else if(type == 'F'){
 		i=fehrenhite_to_celicus(t);
 	};

 	cout<<"Converted Value: "<<i<<endl;

 	return 0;
 }
 
 