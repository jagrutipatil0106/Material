

#include <iostream> 
using namespace std;
int a = 1000; //here variable 'a' is a globle variable. 
class Test 
{ 
     int a; //'a' ia a class varible.
     public: 
     Test() 
  { 
     a = 0; //this is the same 'a' used in 9th no line.
  } 
  void get_a() 
 { 
    int a; // here 'a'is a function variable.it will only used for this same function.
    //this will get destroy after termination line.
    cout << "Enter Value of A :";
    cin >> a; 
  } 
  void put_a() 
  { 
     cout << endl << a << "\t" << ::a; //a=class variable ,::a= globle varialbe wich is declared out of the class
  } 

}; 
int main() 
{ 
   Test t1; //t1 is an object of test class.after creating an object it calls constructor.
   t1.get_a(); //callin member fuction of class.
   t1.put_a();

    return 0;
} 