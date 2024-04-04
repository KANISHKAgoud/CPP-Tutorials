#include<iostream>
using namespace std;

class Vehicle
{
    string name ;
    int a ;

    static int n;

    public:
        Vehicle ()
        {
            n++;
        }
        
        Vehicle (string name, int a)
        {
            this->name;
            this->a ;
            cout<<"name is "<<name <<endl;
            cout<<"number on the number plate is "<<a<<endl;
            n++;
        }

        static int print ();

        static int decreament();

        ~Vehicle()
        {
            n--;
            cout<<"no of vehicle remaining "<<n<<endl;
        }

};

int Vehicle :: n =0;

int Vehicle :: print ()
{
    cout <<"no of vehicle are "<<n<<endl;
    return n;

}

int Vehicle :: decreament ()
{
    n--;
    return n;
}

int main()
{
    //Vehicle v;
    Vehicle v1("maruti suzuki", 4547);
    Vehicle v2; cout<<"no of vehicle are "<<Vehicle::print()<<endl;
    Vehicle v3; cout<<"no of vehicle are "<<Vehicle::decreament()<<endl;

    Vehicle v4;
    return 0;
}