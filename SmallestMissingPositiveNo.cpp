//Given an unsorted integer array nums, find the smallest missing positive integer.
#include<bits/stdc++.h>
using namespace std;
int max(int *a,int n){
    int m=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>a[0])
        m=a[i];
    }
    return m;
}
int first(int *a,int n){
    bool found=false;
    unordered_map<int,int>u;
    for(int i=0;i<n;i++)
    {
       u[a[i]]++;
    }
    for(int i=1;i<u.size();i++)
    {
        if(u[i]==0)
        {
           found=true;
           return (i);
        } 
    }
    if(found==false){
        return (max(a,n)+1);
    }
}
int main(){
    int a[4]={3,4,-1,1};
    cout<<first(a,4);
}
