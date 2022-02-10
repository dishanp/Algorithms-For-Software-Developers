class Solution {
public:
    vector<int>nse(vector<int>nums){
        vector<int>res(nums.size());
        stack<int>s;
        s.push(-1);
        for(int i=nums.size()-1;i>=0;i--){
            while(s.top()!=-1&&nums[i]<=nums[s.top()])
                s.pop();
            res[i]=s.top();
            s.push(i);
        }
        return res;
    }
     vector<int>pse(vector<int>nums){
        vector<int>res(nums.size());
        stack<int>s;
        s.push(-1);
        for(int i=0;i<nums.size();i++){
            while(s.top()!=-1&&nums[i]<=nums[s.top()])
                s.pop();
            res[i]=s.top();
            s.push(i);
        }
        return res;
    }
    int largestRectangleArea(vector<int>& h) {
        int s=h.size();
        vector<int>n(s);
        n=nse(h);
        vector<int>p(s);
        p=pse(h);
        int res=INT_MIN;
        for(int i=0;i<h.size();i++){
            int len=h[i];
            if(n[i]==-1)
                n[i]=s;
            int br=n[i]-p[i]-1;
            int area=len*br;
            res=max(res,area);
        }
        return res;
    }
};
