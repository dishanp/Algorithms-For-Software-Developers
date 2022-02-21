class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string,char>u;
        unordered_map<char,string>m;
        istringstream ss(s);
        string str;
        int j=0;
        int ctr=0;
        while(ss>>str){
              if(u.find(str)==u.end()&&m.find(pattern[j])==m.end())
            {
                u[str]=pattern[j];
                m[pattern[j]]=str;
            }
            else{
                if(u[str]!=pattern[j])
                    return false;
                if(m[pattern[j]]!=str)
                    return false;
            }
            j++;
            ++ctr;
        }
        if(ctr!=pattern.size())
            return 0;
        return true;
    }
};
