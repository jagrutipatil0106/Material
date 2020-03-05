#include <iostream>
using namespace std;

int main()
{
    float sum = 0;
    int N;
    float average;

    cout<<"Enter the size of an element :"<<endl;
    cin>>N;

    int array[N];
    
    for(int i = 0; i < N; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> array[i];
        sum = sum + array[i];
    }

    average = sum / N;
    cout << "Average = " << average;

    return 0;
}
