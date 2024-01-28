#include<iostream>
using namespace std;
class car
{
    public :
        virtual void start()=0;
        virtual void stop()=0;

};
class Innova:public car
{
    public :
    
        void start()
        {
            cout<<"Innova Started"<<endl;
        }
        void stop()
        {
            cout<<"Innova stopped"<<endl;
        }
};
class swift : public car
{
    public :
        void start()
        {
            cout<<"swift started"<<endl;
        }
        void stop()
        {
            cout<<"swift stopped"<<endl;
        }
};

int main()
{
    car *c = new Innova();
    c->start();       /*here in line 39 and 41 same function is called but different output we are getting this is called polymorphism*/
    c = new swift();
    c->start();
}