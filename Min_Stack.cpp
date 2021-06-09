using namespace std;
#include<bits/stdc++.h>
int min(stack<int>s){
    stack<int>temp;
    int min=INT_MAX;
    while(!s.empty()){
        int x=s.top();
        if(x<min)
        min=x;
        s.pop();
    }
    return min;
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
    cout<<min(s);
    return 0;
}
