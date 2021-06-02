using namespace std;
#include<bits/stdc++.h>
int fib(int n){
    if(n<=1)
    return n;
    return fib(n-1)+fib(n-2);
}
int fib_iterative(int n){
    int a=0;
    int b=1;
    int c=a+b;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<fib(n)<<" "<<fib_iterative(n);
    return 0;
}
