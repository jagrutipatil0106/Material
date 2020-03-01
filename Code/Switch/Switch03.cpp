// https://www.geeksforgeeks.org/output-c-programs-set-30-switch-case/

#include<stdio.h> 
#define L 10 

int  main() 
{ 
    auto a = 10; 
    switch (a*2, a*3, a)
    // Explanation: In C, comma is also operator with least precedence.
    // so if (a,b,c,d) in this list d is picked
    { 
    case L: 
        printf("ABC"); 
        break; 
  
    case L*2: 
        printf("XYZ"); 
        break; 
  
    case L*3: 
        printf("PQR"); 
        break; 
  
    default: 
        printf("MNO"); 
  
    case L*4: 
        printf("www"); 
        break; 
    } 
    return 0;
}