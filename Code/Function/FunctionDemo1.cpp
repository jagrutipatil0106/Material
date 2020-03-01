#include<stdio.h>
 #include<conio.h>

void add() // function defination

{
	int a,b,c;
	printf("\n enter first number :");
	scanf("%d",&a);
	printf("\n enter second number");
	scanf("%d",&b);
	c=a+b;
	printf("\n result of addition = %d",c);

}
 int main()
{
  // printf("welcome");

   add(); //function calling  

   add();

   add();

   add();

   //printf("thank you");

   return 0;

}



/* 
the first word of a function defination represents its return type 
eg: above int function is returning '0'. therfore it has a return type 'int'
The next word represent the name of the function.
eg: main.
*/