#include<iostream>
using namespace std;
class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle();
        Rectangle(int l ,int b);
        Rectangle(Rectangle(&r));
        int setLength(int l);
        int setBreadth(int b);
        int getLength(){return length;}
        int getBreadth(){return breadth;}
        int area();
        int perimeter();
        bool isSquare();
        ~Rectangle();


};
int main()
{
     Rectangle r1(10,10);
     cout<<"Area "<<r1.area()<<endl;
     if(r1.isSquare())
     {
        cout<<"yes"<<endl;
     }
}

Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int l,int b)
{
    setLength(l);
    setBreadth(b);
}
Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
int Rectangle::setLength(int l)
{
    if(l>0)
    {
        length=l;
    }
    else
    {
        cout<<"Length cannot be negative"<<endl;
        length=1;
    }
}
int Rectangle::setBreadth(int b)
{
    if(b>0)
    {
        breadth=b;
    }
    else{
        cout<<"breadth cannot be nagtive"<<endl;
        breadth=1;
    }
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
bool Rectangle::isSquare()
{
    return length==breadth;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle Destroyed"<<endl;
}