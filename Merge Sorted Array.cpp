class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int k=0;
        int n3[m+n];
        while(i<m&&j<n){
            if(nums1[i]<=nums2[j]){
                n3[k]=nums1[i];
                ++i;
            }
            else if(nums1[i]>nums2[j]){
                n3[k]=nums2[j];
                ++j;
            }
            ++k;
        }
        for(;i<m;i++){
            n3[k++]=nums1[i];
        }
        for(;j<n;j++){
            n3[k++]=nums2[j];
        }
        for(int i=0;i<nums1.size();i++)
            nums1[i]=n3[i];
    }
};
