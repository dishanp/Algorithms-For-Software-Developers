class Solution{
    public:
    int stackMiddle(int n, stack<int> st){
        for(int i=0;i<n/2;i++){
            st.pop();
        }
        return st.top();
    
    }
};
