#include <stdio.h> 

int main() 
{ 
	double k = 0; 
	for (k = 0.0; k < 3.0; k++); //a for loop can also run withaut body with just semicolon
		//Explanation : Printf is a separate instruction as it is not included within the loop. 
		// Notice the semicolon “;” after the for loop. After the execution of loop printf statement executes.
	
	printf("%lf", k); 
	return 0;
} 
