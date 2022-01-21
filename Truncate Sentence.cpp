class Solution {
public:
    string truncateSentence(string s, int k) {
        istringstream ss(s);
        string word;
        int ctr=0;
        string res="";
        while(ss>>word){
            if(ctr==k)
                break;
            res+=word;
            if(ctr!=k-1)
                res+=" ";
            ++ctr;
        }
        return res;
    }
};
