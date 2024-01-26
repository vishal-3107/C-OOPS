#include<iostream>
using namespace std;
class parent
{
    public:
        void display()
        {
            cout<<"Display of parent"<<endl;
        }
};
class child: public parent
{
    public:
        void display()
        {
            cout<<"Display of child"<<endl;
        }
};

int main()
{
    parent p;
    p.display();
}