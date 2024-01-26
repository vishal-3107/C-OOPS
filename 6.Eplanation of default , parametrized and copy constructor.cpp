#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    int setLength(int l)
    {
        if(l>0)
        {
            length=l;
        }
        else{
            cout<<"Length cannot be negative"<<endl;
            length=1;
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
            breadth=1;
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
    int area()
    {
        return length*breadth;
    }
    int perimetre()
    {
        return 2*(length+breadth);
    }
    rectangle()  // This is a default constructor 
    {
        length=1;
        breadth=1;
    }
    rectangle(int a,int b) // This is a paramaterized constructor
    {
        setLength(a);
        setBreadth(b);
    }
    rectangle(rectangle(&r2)) // This is a copy constructor
    {
        length=r2.length;
        breadth=r2.breadth;
    }
};
int main()
{
    //rectangle r1;
    //cout<<r1.area()<<endl; // This will call the default constructor
    rectangle r1(5,10);
    cout<<r1.area()<<endl; // This will call the paramaterized constructor
    rectangle r2(r1);      // This will call the copy constructor 
    cout<<r2.area()<<endl;

}
