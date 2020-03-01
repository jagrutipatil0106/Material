#include<stdio.h>
#include<conio.h>

void compare()
{
	int number;

	printf("Enter the Number:\n");

	scanf("%d" ,& number);

	if(number>0){

		printf("number is positive\n");
	}
		else if(number == 0){

		printf("number is 0\n");
	}
		
		else {
			printf("number is negative\n");
	
	}

}



int main()
{
	compare();

	compare();

	compare();

	return 0;

}

 