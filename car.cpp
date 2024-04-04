#include<iostream>
using namespace std;

class Car 
{
    string name;
    string id ;
    float milenge;
    float distance;

    public:
        string getname()
        {
            return name;
        }

        string getid()
        {
            return id;
        }

        float getmilenge();
        void travel (int kmstravel);
        float distancetravel();

};

float Car :: getmilenge ()
{
    return milenge ;
}

void Car :: travel (int kmstravel)
{
    distance += 1;
}

float Car :: distancetravel ()
{
    return distance ;
}

int main()
{
    Car c;
    
    cout<<c.distancetravel()<<endl;
    c.travel(2);
    cout<<c.getname()<<endl;
    cout<<c.getid()<<endl;
    cout<<c.getmilenge()<<endl;
    cout<<c.distancetravel()<<endl;
    return 0;
}