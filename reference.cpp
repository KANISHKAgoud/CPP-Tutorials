#include<iostream>
using namespace std;

void notreference(int a)
{
    a++;
}

void byreference(int &a)
{
    a++;
}

int main()
{
    
    int a=12;
    int b=a;
    int &r=a;
     
    a=a+1;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"&r="<<r<<endl; 

    a=12;
    b=a;
    r=a;
    b=b+1;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"&r="<<r<<endl; 

    a=12;
    b=a;
    r=a;
    r=r+1;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"&r="<<r<<endl; 

    b=4;
    cout<<"b="<<b<<endl;
    notreference(b);
    cout<<"pass by value b="<<b<<endl;

    
    b=4;
    cout<<"b="<<b<<endl;
    byreference(b);
    cout<<"pass by reference b="<<b<<endl;

    return 0;
}