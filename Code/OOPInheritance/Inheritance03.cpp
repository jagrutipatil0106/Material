
// ProblemStatement
// C++ program to demonstrate implementation 
// of Inheritance 
   
#include <bits/stdc++.h> 
using namespace std; 
  
 
class Parent //Base class
{ 
    public: 
      int id_p; 
}; 
   
 
class Child : public Parent // Sub class inheriting from Base Class(Parent)
{ 
    public: 
      int id_c; 
}; 
  
 
int main()  
   { 
       
        Child obj1; 
           
        // An object of class child has all data members 
        // and member functions of class parent 
        obj1.id_c = 7; 
        obj1.id_p = 91; 
        cout << "Child id is " <<  obj1.id_c << endl; 
        cout << "Parent id is " <<  obj1.id_p << endl; 
          
        return 0; 
   }  