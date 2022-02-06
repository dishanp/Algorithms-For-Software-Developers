class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res=-1;
        for(string i:sentences){
            int ctr=0;
            istringstream ss(i);
            while(ss>>i){
                ++ctr;
            }
            res=max(res,ctr);
        }
        return res;
    }
};
