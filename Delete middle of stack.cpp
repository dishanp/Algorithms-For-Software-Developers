void deleteMiddle(stack<int>&i, int N){
    stack<int>s;
    int m=N/2;
    while(m){
        s.push(i.top());
        i.pop();
        m--;
    }
    i.pop();
    while(!s.empty())
    {
        i.push(s.top());
        s.pop();
    }
   
}
