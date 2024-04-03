#include<iostream>
using namespace std;

void forloop(int i)
{
    for (i=0;i<=100;i++)
    {
        cout<<i<<" ";
    }
    cout<<" "<<endl;
}

void whileloop(int i)
{
    while (i<=100)
    {
        cout<<i<<" ";
        i++;
    }
    cout<<endl;
}

void DoWhile(int i)
{
    do 
    {
        cout<<i<<" ";
        i++;
    }
    while (i<=100);
    cout<<endl;

}

void nestedloop(int i)
{
    for(i=0;i<=0;i++)
    {
        for(int j=0; j<=100;j++)
        {
            cout<<j<<" ";
        }
    }
    cout<<endl;
}



int main ()
{
    int i=0;
    cout<<"100 numbers by for loop: "<<endl; 
    forloop(i);
    cout<<"100 numbers by while loop: "<<endl;
    whileloop(i);
    cout<<"100 numbers by do while loop"<<endl;
    DoWhile(i);
    cout<<"100 numbers by nested loop "<<endl;
    nestedloop(i);

    return 0;
}