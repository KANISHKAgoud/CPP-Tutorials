#include<iostream>
using namespace std;

int main()
{
    int array[10]={3,4,5,7,6,8};
  /*  int arr[6][7]={{1,2,3,4},{1,2,3,4}};
    int *ptr;
    int **ptr2= new (int *) [4];           // allocate 4 rows
    int arr[4][3]={ptr,ptr2};
 
    for (int r=0;r<4;r++)       // here r is rows 
    {
        ptr2[r]= new int [3];   // here coloumns are 3
    }
*/
    int h=5;
    int *k=&h;
    cout<<k<<" "<<&h<<endl;
    cout<<*k<<" "<<h<< endl;

    int u=3;
    k= new int (2);
    delete k;
    k= new int [u];         //dynamic memory allocation of array
    delete [] k;

    int a=1;
    int *ptr = &a;
    int **ptr2 = &ptr;
    cout<<ptr2 <<" "<< &ptr<<endl;
    cout<<*ptr2 <<" "<< ptr<<endl;
    cout<<**ptr2 <<" "<< *ptr<<endl;

    int *p;
    char *c;
    cout <<sizeof (p)<<endl;
    cout <<sizeof (c)<<endl;

    int *j=array;
    j+=1;
    cout<<j<<endl;
    cout<<*j<<endl;  // gives the value of array from the numbers added

    int *e= &array[3];    
    cout<<e<<endl;
    cout<<*e<<endl;
    cout<<(e-array)<<endl;

    return 0;
}