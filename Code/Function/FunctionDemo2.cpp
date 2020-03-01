/* */

#include<stdio.h>
#include<conio.h>

int add(int a,int b) //a and b are parameter/arguments to the function, there datatypes are int.
{
 int sub;
 sub= a + b;
 return sub;
}

int main()
{
int sjfbdsgfui, sum2;

sjfbdsgfui=add(1, 4);
printf(" sum1=%d \n", sjfbdsgfui); // yellow sum1 it will just print itself and %d is answer of 19 line

sum2=add(4,6);
printf("sum2=%d \n", sum2);


return 0;


}