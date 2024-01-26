#include<iostream>
using namespace std;
class base
{
  public:
    base()
    {
        cout<<"default of base"<<endl;
    }
    base(int x)
    {
        cout<<"Parametrized of base"<<endl;
    }
};

class derived : public base
{
  public:
    derived()
    {
        cout<<"default of derived"<<endl;
    }
    derived(int y)
    {
        cout<<"parametrized of derived"<<y<<endl;
    }
    derived(int x, int y):base(x)
    {
        cout<<"parameterized of derived"<<x<<y<<endl;
    }
};

/*Case-1 When an object of derived class is made then first constructor of base class is executed then the constructor of derived class is executed
int main()
{
    derived d; // object of derived class is made
}
*/

/* Case-2 When an object of dervived class is called by passing an argument then default constructor of base class is called first after that parametrized
  constructor of derived class is called.
int main()
{
    derived(10);
}
*/
/*Case-3 When an object of derived class is made by passing two argument then first default constructor of base class is called then parametrized
of derived class is called*/
int main()
{
    derived(20,10);
}