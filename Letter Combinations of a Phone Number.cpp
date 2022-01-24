class Solution {
public:
    void util(vector<string>&res,vector<string>dic,string digits,int ind,string output){
        if(ind==digits.size())
        {
            res.push_back(output);
            return;
        }
        int no=digits[ind]-'0';
        string temp=dic[no];
        for(int i=0;i<temp.size();i++){
            output.push_back(temp[i]);
             util(res,dic,digits,ind+1,output);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        if(digits.size()==0)
            return res;
        vector<string>dic={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int ind=0;
        util(res,dic,digits,ind,"");
            return res;
    }
};
