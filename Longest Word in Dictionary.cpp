class Solution {
public:
    string longestWord(vector<string>& words) {
        string ans = "";
        set<string> st;
        for(auto s : words)
            st.insert(s);
        
        for(string word : words) {
            if(word.length()>ans.length() || (word.length()==ans.length() && ans>word))  {
                bool fine = 1;
                for(int k=1;k<word.length();k++){
                    if(st.find(word.substr(0,k)) == st.end()){
                        fine = 0;
                        break;
                    }
                }
                if(fine) ans = word;
            }
        }
        
        return ans;
    }
};
