class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int h=2*n/2;
        vector<int>temp(2*n);
        int i=0;
        int k=0;
        int ctr=1;
        int ha=h;
        while(i<=n&&h<2*n){
            if(ctr%2!=0){
                temp[k++]=nums[i];
                i++;
            }
            else{
                temp[k++]=nums[h];
                h++;
            }
            ++ctr;
        }
        return temp;
    }
};
