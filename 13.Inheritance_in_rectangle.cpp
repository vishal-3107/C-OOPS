#include<iostream>
using namespace std;
class rectangle
{
    private:
        int length;
        int breadth;
    public:
        int getLength()
        {
            return length;
        };
        int getBreadth()
        {
            return breadth;
        };
        void setLength(int l);
        void setBreadth(int b);
        int area();
        int perimetre();

        rectangle(int l=0, int b=0)
        {
            length = l;
            breadth = b;
        }

};

class cuboid : public rectangle
{
    private:
        int height;
    public:
        int getHeight()
        {
            return height;
        };
        void setHeight(int h)
        {
            height = h;
        };
        int volume();

    cuboid(int l =0, int b= 0, int h = 0):rectangle(0,0)
    {
        height = h;
    }
};

void rectangle :: setLength(int l)
{
    if(l>=0)
    {
        length = l;
    }
    else{
        cout<<"Length cannot be negative"<<endl;
        length = 0;
    }
}

void rectangle :: setBreadth(int b)
{
    if(b>=0)
    {
        breadth = b;

    }
    else{
        cout<<"Breadth cannot be negative"<<endl;
        breadth = 0;
    }
}

int rectangle :: area()
{
    return length*breadth;
}

int rectangle :: perimetre()
{
    return 2*(length + breadth);
}
 
int cuboid :: volume()
{
    return getLength()*getBreadth()*getHeight();
}

int main()
{;
    cuboid c(20);
    c.setLength(10);
    c.setBreadth(20;)
    cout<<c.volume()<<endl;
    
}


