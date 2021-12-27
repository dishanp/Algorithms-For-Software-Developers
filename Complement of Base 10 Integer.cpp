class Solution {
public:
    int bitwiseComplement(int nums) {
        if(nums==0)
            return 1;
        vector<int>b;
        int res=0;
        while(nums){
            b.push_back(nums%2);
            nums/=2;
        }
        reverse(b.begin(),b.end());
        int j=0;
        for(int i=b.size()-1;i>=0;i--){
            b[i]=(b[i]==0)?1:0;
            res+=b[i]*pow(2,j++);
        }
        return res;
    }
};
