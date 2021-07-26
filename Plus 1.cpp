class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        vector<int>res;
        int n=d.size();
        if(n==1&&d[0]==9){
            res.push_back(1);
            res.push_back(0);
            return res;
        }
        for(int i=0;i<n;i++){
            res.push_back(d[i]);
        }
        if(res[n-1]!=9){
            res[n-1]+=1;
            return res;
        }
        else{
            for(int i=n-1;i>=0;i--){
                if(res[i]==9){
                    res[i]=0;
                }
                else{
                    res[i]+=1;
                    break;
                }
            }
            if(res[0]==0){
                res[0]=1;
                res.push_back(0);
            }
        }
        return res;
    }
};
