class Solution{
    public:
    //Function to return the position of the first repeating element.
    int ind(int x,int arr[],int n){
        for(int i=0;i<n;i++)
	    {
	        if(x==arr[i])
	        return i;
	    }
	    return -1;
    }
    int firstRepeated(int arr[], int n) {
        unordered_map<int,int>u;
	    for(int i=0;i<n;i++)
	    {
	        u[arr[i]]++;
	        if(u[arr[i]]>1)
	        {
	            return ind(arr[i],arr,n);
	        }
	    }
	    return -1;
    }
};
