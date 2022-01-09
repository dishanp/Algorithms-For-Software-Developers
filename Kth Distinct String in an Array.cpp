class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>u;
        int ctr=0;
        for(string s:arr)
            u[s]++;
        for(string s:arr)
        {
            if(u[s]==1)
            {
                ++ctr;
                if(ctr==k)
                    return s;
            }
        }
        return "";
    }
};
