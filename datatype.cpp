#include<iostream>
using namespace std;

struct demo
{
    int x;
    double x1;
};

typedef struct demo d;

class demodata
{
    string fr;

    public:
        void  f()
        {
            string s="string";
            cout<<"string is "<<s<<endl;
        }
        demodata() {}
        demodata(string s): fr (s) {}

};

typedef demodata e;

int main()
{
    int a;
    double c=6.7;
    float b=5.6;
    bool z=true;
    char ch='j';
    string s="jkl";

    int array[6]={1,2,3,4};
    int *p=&a;
    int &r=a;

    enum numbers 
    {
        one,
        two,
        three,
        four
    };
    numbers n=two;
    cout<<"number is "<<n<<endl;

    d q{3,6.7};
    cout<<"value of x1 is "<<q.x1<<endl;

    e w("hello");
    w.f();

    return 0;
}
