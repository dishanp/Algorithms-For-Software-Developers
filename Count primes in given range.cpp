using namespace std;
#include<bits/stdc++.h>
int count_primes(int a,int b){
    int n=b;
    bool prime[b+1];
    int ctr=0;
    memset(prime,true,sizeof(prime));
    for(int i=2;i*i<=n;i++){
        if(prime[i])
        {
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=a;i<=b;i++){
        if(prime[i])
        ++ctr;
    }
    return ctr;
}
int main(){
    int a=1;
    int b=10;
    cout<<count_primes(a,b);
}
