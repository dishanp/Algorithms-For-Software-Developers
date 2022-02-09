void util(stack<int>&s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int temp=s.top();
    s.pop();
    util(s,x);
    s.push(temp);
}

stack<int> pushAtBottom(stack<int>& s, int x) 
{
    // Write your code here.
   util(s,x);
    return s;
}
