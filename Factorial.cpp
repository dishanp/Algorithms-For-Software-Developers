using namespace std;
#include<bits/stdc++.h>
int fact(int n){
    if(n==0)
    return 1;
    if(n==1)
    return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<fact(n);
    return 0;
}
