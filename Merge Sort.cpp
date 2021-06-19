#include<bits/stdc++.h>
using namespace std;
void show(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void merge(int a[],int left,int right,int mid){
    int i=left;
    int j=mid+1;
    int k=left;
    int b[right+1];
    while(i<=mid&&j<=right){
        if(a[i]<a[j]){
            b[k]=a[i];
            ++i;
        }
        else if(a[i]>=a[j]){
            b[k]=a[j];
            ++j;
        }
        ++k;
    }
        for(;i<=mid;i++){
            b[k++]=a[i];
        }
        for(;j<=right;j++){
            b[k++]=a[j];
        }
        for(int i=left;i<=right;i++)
        a[i]=b[i];
    }
void mergesort(int a[],int left,int right){
    if(left>=right)
    return;
    int mid=left + (right-left)/2;
    mergesort(a,left,mid);
    mergesort(a,mid+1,right);
    merge(a,left,right,mid);
}
int main(){
    int a[7]={1,4,6,2,3,8,0};
    show(a,7);
    mergesort(a,0,6);
    show(a,7);
    return 0;
}
