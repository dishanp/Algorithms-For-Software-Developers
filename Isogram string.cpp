class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        unordered_map<char,int>u;
        for(int i=0;i<s.size();i++)
        u[s[i]]++;
        for(int i=0;i<u.size();i++)
        {
            if(u[i]>1)
            return false;
        }
        return true;
    }
};
