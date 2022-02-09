void bottom(stack<int>&s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int temp=s.top();
    s.pop();
    bottom(s,x);
    s.push(temp);
}
void util(stack<int>&s){
    if(s.empty()){
        return;
    }
    int x=s.top();
    s.pop();
    util(s);
    bottom(s,x);
}

void reverseStack(stack<int> &s) {
    // Write your code here
    util(s);
}
