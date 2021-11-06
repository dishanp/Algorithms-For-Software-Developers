class Solution{
    public:
    long long ValidPair(int a[], int n) 
    { 
      sort(a,a+n);
    	long long res=0;
    	int i=0;
    	int j=n-1;
    	while(i<j){
    	    if(a[i]+a[j]>0)
    	    {
    	        res+=j-i;
    	        j--;
    	    }
    	    else{
    	        ++i;
    	    }
    	}
    	return res;
    }   
};
