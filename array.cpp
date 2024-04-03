#include<iostream>
using namespace std;

int main()
{
    int arr1[8];
    int arr2[9]={1,2,3,4,5,6};
    int arr3[]={1,2,3};
    cout<<arr1[4]<<endl;
    cout<< sizeof(arr1)<<endl;
    cout<< sizeof(arr1[0])<<endl;
    cout<<sizeof(arr1)/sizeof(arr1[0])<<endl;
    
    cout<<"enter values of array"<<endl;
    for(int i=0;i<7;i++)
    {
        cin>>arr1[i];
    }
    cout<<arr1[];
    return 0;
}