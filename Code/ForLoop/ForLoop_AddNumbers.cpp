// Porblem: Take a integer number(N) and output the sum from 1 to that number.
// Example: Output => (1 + 2 + 3 + .... + N )

#include <stdio.h>
#include <conio.h>
int main()
{
	int number;  
	int sum = 0;



	printf("\nenter the number=>");

	scanf("%d",&number);

	for(int i = 1; i<=number; i++){

	 	sum = i + sum;


	 }
	printf("%d\n",sum );

	return 0;
}