class Solution {
public:
    int maxDistance(vector<int>& c) {

        int res=INT_MIN;
        for(int i=0;i<c.size();i++){
            for(int j=i+1;j<c.size();j++){
                if(c[i]!=c[j])
                {
                    res=max(res,abs(i-j));
                }
            }
        }
        return res;
    }
};
