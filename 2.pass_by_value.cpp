#include<iostream>
using namespace std;
void swap(int a, int b)
{
    int temp;           // formal parameter
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x=10, y=20;
    swap(x,y);                // actual parameter
    cout<<x<<y<<endl;
}

// The concept pass by value says that any changes done in formal parameter will not affect the actual parameter.
// here as an output we will get 10,20 .