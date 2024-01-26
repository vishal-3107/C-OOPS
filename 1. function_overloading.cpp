/* Code for function overloading*/

#include <iostream>

using namespace std;

int add(int x, int y)
{
    int z;
   z = x + y;
   return z;
}

int add(int x, int y, int z)
{
    int f = x+y+z;
    return f;
}

int main()
{
    int a=30,b=20,c=30;
   int d = add(a,b);
    cout<<d<<endl;
    int e = add(a,b,c);
    cout<<e<<endl;

    return 0;
}
