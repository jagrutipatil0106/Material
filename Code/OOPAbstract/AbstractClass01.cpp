// Classes that can be used to instantiate objects are called concrete classes
// Abstract classes cannot be used to instantiate objects and serves only as an interface.
// Attempting to instantiate an object of an abstract class causes a compilation error.

// If a subclass of an ABC needs to be instantiated, it has to implement each of the virtual functions, 
// which means that it supports the interface declared by the ABC. 
// Failure to override a pure virtual function in a derived class, then attempting to instantiate objects of that class, 
// is a compilation error.


#include <iostream>
using namespace std;

// Base class Shape
class Shape {
   public:
      virtual float getArea() = 0; // Pure Virtual Function
      // A pure virtual function is specified by placing "= 0" in its declaration.

   // Abstract functions and Abstract class is used for defining the common interface for all the derived classes.


};

class Rectange: public Shape {
   private:
      float height;
      float width;

   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
      float getArea(){
         return width * height;
      }
};


class Circle: public Shape {
   private:
      float radius;

   public:
      void setRadius(int r) {
         radius = r;
      }

      float getArea(){
         return 3.14 * radius * radius;
      }
};


int main(){

   // Shape s;

   // Rectange r1;

   Circle c1;

   return 0;
}