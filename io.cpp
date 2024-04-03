#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;

int main()
{
    string s;
    float a;
    cout<<"enter a float number:"<<endl;
    cin>>a;

    cout<<"enter the string"<<endl;
    cin>>s;
    cout<<s<<endl;

    cout<<"enter a string "<<endl;
    cin>>ws;
    getline(cin,s,'@');
    cout<<s<<endl;

    cout<<"enter a string "<<endl;
    cin>>ws;
    getline(cin,s);
    cout<<s<<endl;

    cout<<"enter a string "<<endl;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(cin,s);
    cout<<s<<endl;

    //manipulators
    s="day";
    cout<<s<<endl;
    cout<<setw(10)<<setfill('*');
    cout<<left<<s<<endl;
    cout<<right<<s<<endl;

    return 0;
}