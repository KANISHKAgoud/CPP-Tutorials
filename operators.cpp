#include<iostream>
using namespace std;

int main()
{
    int a ,b;
    a=34;
    b=20;

    cout<<"operators"<<endl;
    cout<<"arithmatic operators"<<endl;
    cout<<a+b<<endl<<a*b<<endl<<a/b<<endl<<a%b<<endl<<a-b<<endl;

    cout<<"logical operators"<<endl;
    if(a==b)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
 
    if (a!=b)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"true"<<endl;
    }

    cout<<"relational operators"<<endl;
     if(a>b&&(b=0))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }

     if (!(a>b))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }

    cout<<"Bitwise operators"<<endl;
    cout<<(2|1)<<endl<<(2&1)<<endl<<(2^1)<<endl<<(4>>1)<<endl<<(2<<1)<<endl<<~4<<endl;

    cout<<"ternary opertator"<<endl;
    int c;
    c=(a<b)?c=a:c=b;
    cout<<c<<endl;

    cout<<"unary operator"<<endl;
    a=1;
    c=a++;
    cout<<c<<a<<endl;
    c=++a;
    cout<<c<<a<<endl;
    c=a--;
    cout<<c<<a<<endl;
    c=--a;
    cout<<c<<a<<endl;

    cout<<"shortcut operators"<<endl;
    cout<<(a+=1)<<endl;

    cout<<"other operators"<<endl;
    cout<<sizeof(a)<<endl;

    return 0;
}