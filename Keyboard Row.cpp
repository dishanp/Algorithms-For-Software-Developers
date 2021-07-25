class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>res;
        unordered_map<char,int>fk;
        unordered_map<char,int>sk;
        unordered_map<char,int>tk;
        string f="qwertyuiop";
        string s="asdfghjkl";
        string t="zxcvbnm";
        for(int i=0;i<f.size();i++){
            fk[f[i]]++;
        }
        for(int i=0;i<s.size();i++){
            sk[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            tk[t[i]]++;
        }
        bool c1,c2,c3;
        for(int i=0;i<words.size();i++){
            c1=c2=c3=false;
            for(int j=0;j<words[i].size();j++){
                if(fk[words[i][j]])
                    c1=true;
                if(sk[words[i][j]])
                    c2=true;
                if(tk[words[i][j]])
                    c3=true;
            }
            if((c1&&!c2&&!c3)||(!c1&&c2&&!c3)||(!c1&&!c2&&c3))
                res.push_back(words[i]);
        }
        return res;
    }
};
