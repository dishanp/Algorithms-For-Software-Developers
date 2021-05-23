class Intersection {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>u;
        vector<int>res;
        for(int i=0;i<nums1.size();i++){
            u[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(u[nums2[i]]&&!NotIn(nums2[i],res)){
                res.push_back(nums2[i]);
            }
        }
        return res;
    }
    bool NotIn(int x,vector<int>a){
        bool found=false;
        for(int i=0;i<a.size();i++){
            if(a[i]==x)
                found=true;
        }
        return found;
    }
};
