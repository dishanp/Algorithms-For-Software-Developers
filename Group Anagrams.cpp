class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        unordered_map<string,vector<string>>u;
        for(string s:strs){
            string t=s;
            sort(s.begin(),s.end());
            u[s].push_back(t);     
        }
        for(auto i:u){
            res.push_back(i.second);
        }
        return res;
    }
};
