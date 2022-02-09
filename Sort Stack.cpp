void sortedinsert(stack<int>&s,int x){
    if(s.empty()||x>s.top()){
        s.push(x);
        return;
    }
    int temp=s.top();
    s.pop();
    sortedinsert(s,x);
    s.push(temp);
}
void sortStack(stack<int> &s)
{
	if(s.empty()){
        return;
    }
    int temp=s.top();
    s.pop();
    sortStack(s);
    sortedinsert(s,temp);
}
