#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;     // formal parameter
    *a = *b;
    *b = temp;
}

int main()
{
    int x=10, y=20;
    swap(&x,&y);          // actual parameter
    cout<<x<<y<<endl;

}