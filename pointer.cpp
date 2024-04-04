#include<iostream>
using namespace std;

void pointer(int *j)
{
    (*j) ++;
}

int sum(int *array, int size)
{
    int sum =0, i;
    for(i=0;i<size;i++)
    {
        sum +=*(array +i);       //sum =sum +array[i]
    }
    return sum;
}
int main()
{
    int array[15]={0,1,2,3,4,5};
    int n=5;
    cout<<"sum of the array is "<<sum(array, 6)<<endl;

    cout<<"lets see how a pointer works "<<endl;
    int *p= &n;
    cout<<"befort n value is"<<n<<endl;
    pointer(p);
    cout<<"after n value is "<<n<<endl;

    return 0;
}