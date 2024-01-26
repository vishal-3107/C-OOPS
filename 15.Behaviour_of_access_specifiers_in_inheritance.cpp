#include<iostream>
using namespace std;
class base
{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
    
    void funBase()
    {
        a = 10;
        b = 20;
        c = 30;
    }
};

class derived : public base
{
    public:
      void funDerived()
        {
          /* a = 1; It is in-accessable because it is private*/
            b = 2;
            c = 3;
        }
};

int main()
{
    base x;
    x.a = 15;
    x.b = 13;
    x.c = 20;
     
    derived d;
    d.a = 20;
    d.b = 60;
    d.c = 30;
}