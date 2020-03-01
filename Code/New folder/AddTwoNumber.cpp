// Program to Add tow numbers [Integer/Float]

# include <stdio.h>

int main()
{
	float num1=0, num2=0, sum=0;
	printf("Please enter the 1st number=");
	scanf("%f",&num1);
	
	printf("please enter the 2nd number=");
	scanf("%f",&num2);
	
	sum = num1 + num2;

	printf("sum is= %.5f", sum);
	
	return 0;	
}

