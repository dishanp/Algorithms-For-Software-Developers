class Solution {
public:
    void util(vector<vector<int>>&res,vector<int>&nums,int c){
        if(c==nums.size()){
            if(find(res.begin(),res.end(),nums)==res.end())
            res.push_back(nums);
            return;
        }
        for(int i=c;i<nums.size();i++){
            swap(nums[i],nums[c]);
            util(res,nums,c+1);
            swap(nums[i],nums[c]);
        }
    }
    
bool checkperfectsquare(int n)
{
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
        return true;
}
    return false;
}
    bool check(vector<int>nums){
        for(int i=0;i<nums.size()-1;i++){
            if(!checkperfectsquare(nums[i]+nums[i+1]))
                return false;
        }
        return true;
    }
    int numSquarefulPerms(vector<int>& nums) {
       vector<vector<int>>res;
       util(res,nums,0);
        int ctr=0;
       for(int i=0;i<res.size();i++){
           if(check(res[i]))
               ++ctr;
       }
        return ctr;
    }
};

//or

class Solution {
public:
    int numSquarefulPerms(vector<int>& A) {
        sort(A.begin(), A.end());
        int ans = 0;
        pmt(A, 0, ans);
        return ans;
    }
    void pmt(vector<int> A, int idx, int& ans) {
        if (idx >= A.size()) {
            ++ans;
        }
        for (int i = idx; i < A.size(); ++i) {
            if (i > idx && A[i] == A[idx]) continue;
            swap(A[i], A[idx]);
            if ((idx == 0) || (idx > 0 && isSquare(A[idx] + A[idx - 1]))) {
                pmt(A, idx + 1, ans);
            }
        }
    }
    bool isSquare(int v) {
        int r = sqrt(v);
        return r * r == v;
    }
};
