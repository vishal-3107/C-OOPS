#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;

    public:
    int area()
    {
        return length*breadth;
    }
    int perimetre()
    {
        return 2*(length+breadth);
    }
    int setLength(int l)
    {
        if(l>0)
        {
            length=l;
        }
        else
        {
            cout<<"Length cannot be negative"<<endl;
            length=0;
        }
    }
    int setBreadth(int b)
    {
        if(b>0)
        {
            breadth=b;
        }
        else{
            cout<<"Breadth cannot be nagtive"<<endl;
            breadth=0;
        }
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    
    
};
int main()
{
    rectangle r;
    r.setLength(10);
    r.setBreadth(-5);
    cout<<r.area()<<endl;
}