#include<iostream>
using namespace std;

class Car 
{
    private:
        string name ;
        int id ;
        int c=2;
        
    public:
        void get ()
        {
            cout<<"the name is "<<name <<endl;
            cout <<"the id is "<<id << endl;
        }    
        
        Car ()
        {
            cout <<"default constructor"<<endl;
            cout<<"enter name and id  "<<endl;
            getline(cin,name);
            cin >> id ;
        }

        Car (int x)
        {
            cout<<"parameteriesd contructor"<<endl;
            cout<<"number of cars are "<<x+c<<endl; 
        }

        ~Car()
        {
            cout <<"destructor contructor"<<endl;
        }

};

int main()
{
    Car c;
    Car c1(5);
    c.get ();
    Car c2;

    return 0;
}