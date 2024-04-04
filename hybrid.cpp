#include<iostream>
using namespace std;

/*
//hybrid class 
class A
{
    int a=0;
    public:
    A()
    {
        cout <<"class A"<<endl;
    }

    void h ()
    {
        cout <<"a: "<<a<<endl;
    }
};

class B : public A
{
    public:
    B()
    {
        cout <<"class B"<<endl;
    }
};

class C: public A
{
    public:
    C()
    {
        cout <<"class C"<<endl;
    }
};

class D: public B, public C
{
    public:
    D()
    {
        cout <<"class D"<<endl;
    }
};
 

// if we want to pass use class A  a function to run in a class D then follow this  

class D: public B, public C
{
    public:
    D()
    {
        cout <<"class D"<<endl;
    }

    void j ()
    {
        B::h();
    }
};


int main()
{
    D d;
    d.j();
    cout<<"end"<<endl;
    return 0;
}
*/
// if we don't want to use a function to be called from another class and to be called directly from the class then use virtual as follows 

class A
{
    int a=0;
    public:
    A()
    {
        cout <<"class A"<<endl;
    }

    void h ()
    {
        cout <<"a: "<<a<<endl;
    }
};

class B : virtual public A
{
    public:
    B()
    {
        cout <<"class B"<<endl;
    }
};

class C: public virtual A    // it does not matter wheather u use virtual before public or not 
{
    public:
    C()
    {
        cout <<"class C"<<endl;
    }
};

class D: public B, public C
{
    public:
    D()
    {
        cout <<"class D"<<endl;
    }
};

int main()
{
    D d;
    d.h();
    cout<<"end"<<endl;
    return 0;
}
