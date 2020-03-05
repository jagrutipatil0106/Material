  // ProblemStaement:
  //C++ program for function overriding 
  
#include <bits/stdc++.h> 
using namespace std; 
  
class base 
{ 
public: 
    virtual void print () 
    { cout<< "print base class" <<endl; } 
   
    void show () 
    { cout<< "show base class" <<endl; } 
}; 
   
class derived:public base 
{ 
public: 
    void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly 
    { cout<< "print derived class" <<endl; } 
   
    void show () 
    { cout<< "show derived class" <<endl; } 
}; 
  
//main function 
int main()  
{ 
    base *bptr; //here we have created base(datatype) of pointer(*bptr)
    derived d;  //d is object of derived class.
    bptr = &d;  //here we storing address of d into the base type of pointer wich usually not possible in normal 
    // code example:int type ofdata can not stored in float.
       
    //virtual function, binded at runtime (Runtime polymorphism) 
    bptr->print();  
       
    // Non-virtual function, binded at compile time 
    bptr->show();  
  
    return 0; 
}