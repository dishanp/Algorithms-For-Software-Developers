class Solution {
public:
    bool f(vector<char>a,char c){
        for(char ch:a)
            if(ch==c)
                return 1;
        return 0;
    }
    int countPoints(string rings) {
        unordered_map<int,vector<char>>u;
        int ctr=0;
        for(int i=0;i<rings.size();i+=2){
            u[rings[i+1]-'0'].push_back(rings[i]);
        }
        for(auto i:u){     if(f(i.second,'R')&&f(i.second,'B')&&f(i.second,'G'))
                ++ctr;
        }
        return ctr;
    }
};
