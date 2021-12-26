class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       unordered_map<int,int>u;
        for(int i:arr)
            u[i]++;
        int f=arr.size()/4;
        for(auto i:u)
            if(i.second>f)
                return i.first;
        return -1;
    }
};
