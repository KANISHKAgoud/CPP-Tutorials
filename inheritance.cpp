#include <iostream>
using namespace std;

/*
//simple inheritance
class A
{
    public:
    A()
    {
        cout <<"class A"<<endl;
    }
};

class B: public A
{
    public:
    B()
    {
        cout <<"class B"<<endl;
    }
};

class C
{
    public:
    C()
    {
        cout <<"class C"<<endl;
    }
}; 

int main()
{
    B b;
    cout<<"end"<<endl;
    return 0;
}

//multiple inheritance
class A
{
    public:
    A()
    {
        cout <<"class A"<<endl;
    }
};

class B
{
    public:
    B()
    {
        cout <<"class B"<<endl;
    }
};

class C: public A, public B
{
    public:
    C()
    {
        cout <<"class C"<<endl;
    }
};

int main()
{
    C c;
    cout<<"end"<<endl;
    return 0;
}


//multilevel inheritance
class A
{
    public:
    A()
    {
        cout <<"class A"<<endl;
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

class C: public B
{
    public:
    C()
    {
        cout <<"class C"<<endl;
    }
};

class D: public A
{
    public:
    D()
    {
        cout <<"class D"<<endl;
    }
};

int main()
{
    B b;
    C c;
    D d;
    cout<<"end"<<endl;
    return 0;
}
*/

// Hierarchical Inheritance
class A
{
    public:
    A()
    {
        cout <<"class A"<<endl;
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

class D: public A
{
    public:
    D()
    {
        cout <<"class D"<<endl;
    }
};

int main()
{
    B b;
    C c;
    D d;
    cout<<"end"<<endl;
    return 0;
}