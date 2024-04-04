#include<iostream>
using namespace std;
 
class A                 // abstract class (since it has pure virtual function )
{
    public:
        virtual void func1() =0;        // pure virtual function 
        virtual void func2() =0;
        virtual void func3() =0;

};

class B : public A      //it will also not get inherited by the object since it's now a derived class 
{
    public:
        void func1()
        {
            cout<<" function 1"<<endl;
        }

        void func2()
        {
            cout<<" function 2"<<endl;
        }
};

class C : public B
{
    public:
        void func3()
        {
            cout<<" function 3"<<endl;
        }
};

int main()
{
    C c;
    cout<<"end"<<endl;
    return 0;
}