#include<iostream>
using namespace std;

    void odd(int i)
    {
        while(true)
        {
            i++;
            if (i>10)
            {
                break;
            }
            if (i%2==0)
            {
                continue;
            }
            cout<<i<<endl;
        }
    }

    void checkeven(int n)
    {
        if (n%2==0)
        {
            cout<<"it is a even no."<<endl;
        }
        else if (n==0)
        {
            cout<<"default case"<<endl;
        }
        else
        {
            cout<<"it is a odd no."<<endl;
        }
    }

    void sign(int n)
    {
        if(n<0)
        {
            cout<<"negative"<<endl;
        }
        else if(n>0)
        {
            cout<<"positive"<<endl;
        }
        else
        {
            cout<<"it is zero"<<endl;
        }
    }
int main ()
{
    int s,n,i;
    cout<<"1. print odd numbers"<<endl;
    cout<<"2. check if it is an even number"<<endl;
    cout<<"3. sign of number"<<endl;
    cout<<"4. exit"<<endl;
    cin>>s;
    switch(s)
    {
        case 1:
        
            odd(0);
            break;
        

        case 2:
        
            checkeven(10);
            break;
        

        case 3:
        
            sign(10);
            break;
        

        default:
        
            break;
        
    }
    return 0;
}
    
    
