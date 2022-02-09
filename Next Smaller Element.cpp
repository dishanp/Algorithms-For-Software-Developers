#include<bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
     vector<int>ans(n);
    stack<int>s;
    s.push(-1);
    for(int i=arr.size()-1;i>=0;i--){
        while( arr[i]<=s.top()){
            s.pop();
        }
        ans[i]=s.top();
        s.push(arr[i]);
    }
    return ans;
}
