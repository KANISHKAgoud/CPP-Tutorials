#include<iostream>
using namespace std;

void greeting();
bool LeapYear(int);

void greeting()
{
    cout<<"welcome"<<endl;
}

bool LeapYear(int year)
{
    if (year%100==0)
    {
        if(year%400==0)
        {
             return true;
        }
       else
       {
            return false;
       }
    }
   else if(year%4==0)
   {
        return true;
   }
   else
   {
        return false;
   }
}

void check(int year)
{
    if(LeapYear(year))
    {
        cout<<"it's a leap year"<<endl;
    }
    else
    {
        cout<<"it's not a leap year"<<endl;
    }

}

int main()
{
    int year;
    cout<<"enter the year"<<endl;
    cin>>year;
    greeting();
    check(year);
    return 0;

}