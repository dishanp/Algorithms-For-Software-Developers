class Solution{
public:	
	int maxSubstring(string s)
	{
	int sum=0,maxi=INT_MIN;
    for(auto x:s){
        if(x=='0') 
            sum+=1;
        else 
            sum-=1;
        maxi=max(sum,maxi);
        if(sum<0) 
            sum=0;
    }
    return maxi;
	}
};
