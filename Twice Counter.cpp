class Solution
{
    public:
        int countWords(string list[], int n)
        {
        unordered_map<string,int>u;
        for(int i=0;i<n;i++)
        u[list[i]]++;
        int ctr=0;
        for(auto i:u)
        {
            if(i.second==2)
            ++ctr;
        }
        return ctr;
        }

};
