   //ProblemStatement: C++ program for function overloading 

#include <bits/stdc++.h> 
  
using namespace std; 
class Geeks 
{ 
    public: 
      
     
    void func(int x) // function with 1 int parameter
    { 
        cout << "value of x is " << x << endl; 
    } 
      
   
    void func(double x)  // function with same name but 1 double parameter 
    { 
        cout << "value of x is " << x << endl; 
    } 
      
     
    void func(int x, int y) // function with same name and 2 int parameters
    { 
        cout << "value of x and y is " << x << ", " << y << endl; 
    } 
}; 
  
int main() { 
      
    Geeks obj1; 
      
    // Which function is called will depend on the parameters passed 
    // The first 'func' is called  
    obj1.func(7); 
      
    // The second 'func' is called 
    obj1.func(9.132); 
      
    // The third 'func' is called 
    obj1.func(85,64); 
    return 0; 
}

//In the above example, a single function named func acts differently 
//in three different situations which is the property of polymorphism.

