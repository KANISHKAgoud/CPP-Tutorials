#include<iostream>
using namespace std;
 
class base                  
{
    int a ;

    public:
         void show () 
        {
            cout <<" valre is "<<a<<endl;
        }

        void assign (int k) 
        {
            this->a=k;
        }

        base operator +(base const &obj )
        {
            base s;
            s.a = a + obj.a;    // or rather we can write s.a = this->a + obj.a; 
            return s;
        }

        friend ostream& operator<< (ostream &out, base &obj);
        
};

ostream& operator<< (ostream& out, base &obj)
{
    out<<obj.a;
    return out ;
}

int main ()
{
    base a,b;
    a.assign(4);
    b.assign(6);
    base c;
    c=a+b;
    c.show();
    cout<<"value of c is "<<c<<endl;        //for this line we have to declare a friend function // we can also write it as operator<<(cout,c);

    return 0;
}