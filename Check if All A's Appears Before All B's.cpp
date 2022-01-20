class Solution {
public:
    bool checkString(string s) {
       bool enc=false;
       for(int i=0;i<s.size();i++){
           if(s[i]=='b')
               enc=1;
           if(enc&&s[i]=='a')
               return 0;
       } 
        return 1;
    }
};
