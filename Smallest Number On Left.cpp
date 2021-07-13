class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        stack<int>s;
        vector<int>res;
        int i=0;
        int j=n-1;
        while(i<j){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
        for(int i=n-1;i>=0;i--){
            while(!s.empty()&&a[i]<=s.top())
            s.pop();
            if(s.empty())
            res.push_back(-1);
            else
            res.push_back(s.top());
            s.push(a[i]);
        }
        return res;
    }
};
