class Solution {
public:
    bool checkIfPangram(string s) {
      bool f[26]={false};
        for(int i=0;i<s.size();i++){
            f[(int)s[i]-97]=true;
        }
        for(int i=0;i<26;i++){
            if(f[i]==false)
                return false;
        }
        return true;
    }
};
