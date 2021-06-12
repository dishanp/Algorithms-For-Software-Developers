class Solution{
    public:
	string printMinIndexChar(string str, string patt)
	{
	    // Code here
	    unordered_map<char,int>u;
	    for(int i=0;i<patt.size();i++)
	    u[patt[i]]++;
	    string s;
	    for(int i=0;i<str.size();i++){
	        if(u[str[i]]>0)
	        {
	            s+=str[i];
	            return s;
	        }
	    }
	    return "$";
	}
};
