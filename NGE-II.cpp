class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
      stack<int>s;
      vector<int>res;
        for(int i=nums.size()-1;i>=0;i--)
		{
			s.push(nums[i]);
		}

        for(int i=nums.size()-1;i>=0;i--){
            while(!s.empty()&&s.top()<=nums[i])
                s.pop();
            if(s.empty())
                res.push_back(-1);
            else
                res.push_back(s.top());
            s.push(nums[i]);
        }
        reverse(res.begin(),res.end());
        return res;
}
};
