#include<iostream>
using namespace std;

class base 
{
    int a;

    public:
        base ()
        {
            cout<<"base "<< endl;
        }

        int show()
        {
            cout<<"value of a is "<< a << endl;
        }

        void k()
        {}

        void k(int b, char c)
        {
            cout<<b<<" "<< c<< endl;
        }

        void k(double z)
        {
            cout<< z <<endl;
        }
};

class derived : public base 
{ 
    public:
        derived ()
        {
             cout<<"derived  "<< endl;
        }

        // void h (int a, int x ):base (a,b)
        // {}
};

int main ()
{
    base b;
    b.show();
    b.k(6,'a');
    b.k(5.8);
    derived d;
    //d.h(6,5);

    return 0;
}