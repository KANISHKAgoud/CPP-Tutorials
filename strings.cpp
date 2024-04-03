#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char array[50]="eiutyfhd";
    char array1[50]="ijerrh5";

    cout<<"length of 1st array is "<<strlen(array)<<endl;
    cout<<"length of 2nd array is "<<strlen(array1)<<endl;

    cout<<"comparing both the array we get "<<strcmp(array,array1)<<endl;

    for (char h:array)
    {
        cout<<(int)h<<endl;
        if((int)h == 0)
            break;    
    }

    for(char j:array1)
    {
        cout<<(int)j<<endl;
        if ((int)j ==0)
            break;
    }

    string s;
    getline(cin,s);

    cout<<"length of the string is " <<s.length()<<endl;
    s.push_back('*');
    cout<<"after push back string is "<<s<<endl;
    cout<<"length is"<<s.length()<<endl;
    s.pop_back();
    cout<<"after pop back string is "<<s<<endl;
    cout<<"length is"<<s.length()<<endl; 

    
    int p =s.find('a');
    if(p==string::npos)
    {
        cout<<"not found"<<endl;
    }
    else 
    {
        cout<<"found a at"<<p<<"or we can also right it as "<<s.at(p)<<endl;
    }

    cout<<"using sub string "<<s.substr(2,4);
    string s2(s,4,2);
    cout<<"s2 is "<<s2<<endl;
    
    cout<<"compare we get "<<s.compare(s2);
    cout<<s+s2<<endl;
    s.append(s2);
    cout<<"string s is "<<s<<endl;

    return 0;
}