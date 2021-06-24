class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>u;
        vector<int>res;
        if(nums1.size()>nums2.size()){
        for(int i=0;i<nums1.size();i++){
            u[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(u[nums2[i]]){
                u[nums2[i]]--;
                res.push_back(nums2[i]);
            }
        }
        return res;
        }
        else{
            for(int i=0;i<nums2.size();i++){
            u[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++){
            if(u[nums1[i]]){
                u[nums1[i]]--;
                res.push_back(nums1[i]);
            }
        }
        return res;
        }
    }
};
