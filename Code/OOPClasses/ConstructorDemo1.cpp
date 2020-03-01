// https://www.tutorialsp   oint.com/cplusplus/cpp_constructor_destructor.htm


// A class constructor is a special member function of a class that is executed whenever we create new objects of that class. 
// Program execute the constructor when a class object is instantiated/created.
// Other member functions are only executed when we call them explictly, but not by itself.

// Name of the constructor is always same as Class name. This is used by the compiler to identify the constructor.


// Use of Constuctor: If we need to implement a logic or define something at the time of object creation, then that logic or 
// definition is written in constructor.

#include <iostream>
using namespace std;
 
class Line {
   public:

   		// Member functions are declared as below, but not defined.
		void setLength(double len);
    	double getLength(void);

    	// This is the constructor.
    	// Its name is same as class name
    	// It will be executed at the time of object creations.
        Line(){
			cout << "Object is being created" << endl;

		};

   private:
      double length;
};

// Member functions definitions including constructor

// :: is the scope resolution operator
// Syntax is -> CLASSNAME::MEMBER_FUNCTION_NAME

void Line::setLength( double len ) {
	length = len;
}


double Line::getLength( void ) {
	return length;
}


// Main function for the program
int main() {
   Line line;
   Line line2();  // Another way of creating a object

 	cout<<"Lenght is: "<<line.getLength()<<endl;

   // set line length
   // line.setLength(6.0); 
   // cout << "Length of line : " << line.getLength() <<endl;
 
   return 0;
}
