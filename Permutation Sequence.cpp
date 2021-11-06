class Solution {
public:
    string getPermutation(int n, int k) {
        string nums="";
        for(int i=1;i<=n;i++){
            nums+=to_string(i);
        }
        vector<string>res;
        do{
           res.push_back(nums); 
        }
       while(next_permutation(nums.begin(),nums.end()));
        return res[k-1];
    }
};
