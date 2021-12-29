class Solution {
public:
    int superEggDrop(int e, int f) {
        int res=INT_MAX;
        if(f==0||f==1)
            return f;
        if(e==1)
            return f;
        for(int k=1;k<=f;k++){
            int temp=1+max(superEggDrop(e-1,k-1),superEggDrop(e,f-k));
            res=min(res,temp);
        }
        return res;
    }
};
