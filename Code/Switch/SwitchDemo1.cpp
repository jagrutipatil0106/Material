#include <iostream>
#include<stdio.h>
using namespace std;
 
int main () {
   // local variable declaration:
   char grade;
   printf("Please enter the grade:");
   scanf("%c",&grade);

   switch(grade) {
      case 'A' :
         cout << "Excellent!" << endl; 
         break;
      case 'B' :
         cout << "IN B" << endl;
         // As there is no break in this clause, the control will go inside next switch.
         // break statement is necessary to break/or go out of the swich contruct.
      case 'C' :
         cout << "Well done" << endl;
         break;
      case 'D' :
         cout << "You passed" << endl;
         break;
      case 'F' :
         cout << "Better try again" << endl;
         break;
      default :
         cout << "Invalid grade" << endl;
   }

   cout << "Your grade is " << grade << endl;
 
   return 0;
}