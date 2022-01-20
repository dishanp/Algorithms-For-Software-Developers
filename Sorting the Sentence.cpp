class Solution {
public:
    static bool comp(string a,string b){
        int n=a.size();
        int m=b.size();
        int ac=(int)(a[n-1]);
        int bc=(int)(b[m-1]);
        return ac<bc;
    }
    string sortSentence(string s) {
        istringstream ss(s);
        vector<string>str;
        string word;
        while(ss>>word)
        {
            str.push_back(word);
        }
        sort(str.begin(),str.end(),&comp);
        int sz=str.size();
        for(int i=0;i<sz;i++){
            int l=str[i].size();
            if(i!=sz-1)
            {
            str[i][l-1]=' ';
            }
        }
str[sz-1].erase(str[sz-1].begin()+str[sz-1].size()-1);
        string res="";
        for(int i=0;i<str.size();i++){
            res+=str[i];
        }
        return res;        
    }
};
