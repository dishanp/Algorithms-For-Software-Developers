vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long>res;
        stack<long long>s;
        for(int i=n-1;i>=0;i--){
            while(!s.empty()&&arr[i]>=s.top())
            s.pop();
            if(s.empty())
            res.push_back(-1);
            else
            res.push_back(s.top());
            s.push(arr[i]);
        }
        reverse(res.begin(),res.end());
        return res;
    }
