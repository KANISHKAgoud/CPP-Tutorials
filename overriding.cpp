#include<iostream>
using namespace std;
 
class A                 
{
    public:
        void func1() 
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
        void func1()            //function over written so it will be printed instead of function(func1 ) in A 
        {
            cout<<" function from B"<<endl;
        }

};

int main()
{
    A a;
    B b;
    b.func1();
    b.func2();

    cout<<"end"<<endl;
    return 0;
}