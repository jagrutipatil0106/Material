
#include <iostream> 
using namespace std;

class d 
{ 
    int day, mon; 
    public: 
    d() {  cout << "\nconst";  } 
  ~d() { cout << "\ndest"; } 
}; 
int main() 
{ 
   d *d1 = new d; 
   cout <<"Process";
   return 0;
} 
