#include<iostream>
using namespace std;

class A
{
    private:
        int a;
    public:
        A ()
        {}
        
        void print ()
        {
            cout<<"value of a is  "<<a<<endl;
        }

        A(int a ): a(a) 
        {}

        void add ()
        {
            a+= 10;
        }

        friend class B; 
};        

class B
{
    private:
        int b;

    public:
        B()
        {}

        B(int b): b(b) 
        {}    

        void show ()
        {
            cout<<" value of b is "<<endl;
        }

        void increament (A &obj1)
        {
            obj1.a++;
        }
};

class C;
class D
{
    public:
        void decreament (C &obj2);
};

class C 
{
    private:
        int c;

    public:
        C()
        {}

        C(int c): c(c)
        {}

        void show ()
        {
            cout<<"value of c is "<<c<<endl;
        }    

        friend void increament (C &obj2);
        friend void D::decreament(C &obj2); 
};

void increament (C &obj2)
{
    obj2.c++;
}

void D :: decreament (C &obj2)
 {
            obj2.c--;
        }

int main()
{
    A obj1(4);
    B obj ;
    C obj2(9);
    D obj3;
    obj1.add();
    obj1.print();
    obj.increament(obj1);
    obj1.print();

    obj2.show();
    increament(obj2);
    obj2.show();

    obj3.decreament(obj2);
    obj2.show();

    return 0;
}