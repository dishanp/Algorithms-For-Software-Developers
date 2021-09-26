class Solution {
public:
    static bool comp(string a,string b){
        string ab=a.append(b);
        string ba=b.append(a);
        bool res=(ab>ba)? true: false;
        return res;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>s;
        for(int i:nums){
            s.push_back(to_string(i));
        }
        sort(s.begin(),s.end(),comp);
        string str="";
        for(int i=0;i<s.size();i++){
            str+=s[i];
        }
        return str[0]=='0'? "0" : str;
    }
};
