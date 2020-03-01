//find average using array

#include <iostream> 
using namespace std; 
int main() {
   int n, i;
   float sum = 0.0, avg;
   float num[] = {12, 76, 23, 9, 5}; 

   n = sizeof(num) / sizeof(num[0]); // 

   cout<<sizeof(num)<<endl;
   cout<<sizeof(num[0])<<endl;

   for(i = 0; i < n; i++){
      sum += num[i];//sum=sum+num[i]
   }
   avg = sum / n;
   cout<<"Average of all array elements is "<<avg;
   return 0;
}
