#include<bits/stdc++.h>
using namespace std;
void show(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int l,int h){
    int pivot=arr[l];
    int i=l;
    int j=h;
    do{
        do{i++;}while(arr[i]<=pivot);
        do{j--;}while(arr[j]>pivot);
        if(i<j){
            swap(&arr[i],&arr[j]);
        }
    }while(i<j);
    swap(&arr[j],&arr[l]);
    return j;
}
void quicksort(int arr[],int l,int h){
    if(l<h){
        int j=partition(arr,l,h);
        quicksort(arr,l,j);
        quicksort(arr,j+1,h);
    }
}
int main(){
    int a[7]={1,4,6,2,3,8,0};
    show(a,7);
    quicksort(a,0,6);
    show(a,7);
    return 0;
}
