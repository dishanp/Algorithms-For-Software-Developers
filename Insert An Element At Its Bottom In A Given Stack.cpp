stack<int> pushAtBottom(stack<int>& s, int x) 
{
    // Write your code here.
    stack<int>t;
    while(!s.empty()){
        t.push(s.top());
        s.pop();
    }
    t.push(x);
    while(!t.empty())
    {
        s.push(t.top());
        t.pop();
    }
    return s;
}
