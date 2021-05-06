#include<iostream>
using namespace std;
template<class T>
int search(T *a,T key,int size)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int a[5]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    if(search(a,4,n))
    {
        cout<<"Element found at index: "<<search(a,4,n)<<endl;
    }
    else
    cout<<"Key not found! "<<endl;
    char b[7]="Dishan";
    int n1=sizeof(a)/sizeof(char);
    if(search(b,'p',n1))
    {
        cout<<"Element found at index: "<<search(b,'p',n1);
    }
    else
    cout<<"Key not found! "<<endl;
    
    return 0;
}