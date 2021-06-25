class Solution {
public:
    int maxPower(string s) {
        int ctr=0;
        int max=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1])
            {
                ++ctr;
                if(ctr>max)
                    max=ctr;
            }
            else{
                ctr=0;
            }
        }
        return max+1;
    }
};
