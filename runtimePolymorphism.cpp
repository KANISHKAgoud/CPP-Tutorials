#include<iostream>
using namespace std;
 
class A                 
{
    public:
        virtual void func1() 
        {
            cout<<" function from A"<<endl;
        }

        void func2()
        {
            cout<<" function2 from A"<<endl;
        }
        
};

class B : public A       
{
    public:
        void func1()
        {
            cout<<" function from B"<<endl;
        }

        void func2()
        {
            cout<<" function2 from B"<<endl;
        }

};

int main()
{
    A *p;
    B b;
    p=&b;
    p->func1();
    p->func2();

    cout<<"end"<<endl;
    return 0;
}