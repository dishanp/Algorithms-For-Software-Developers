using namespace std;
#include<bits/stdc++.h>
int max(stack<int>s){
    stack<int>temp;
    int max=INT_MIN;
    while(!s.empty()){
        int x=s.top();
        if(x>max)
        max=x;
        s.pop();
    }
    return max;
}
int main(){
    std::stack<int>s ;
    s.push(2);
    s.push(5);
    s.push(3);
    s.push(41);
    s.push(9);
    s.push(23);
    s.push(12);
    cout<<max(s);
    return 0;
}
