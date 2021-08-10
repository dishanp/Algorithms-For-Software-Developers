class Solution{
public:	
	int binar(int arr[],int n,int x){
	    int lo=0;
	    int hi=n-1;
	    while(lo<=hi){
	        int mid=(lo)+(hi-lo)/2;
	        if(arr[mid]==x)
	        return mid;
	        else if(arr[mid]<x)
	        lo=mid+1;
	        else
	        hi=mid-1;
	    }
	    return -1;
	}
	int count(int arr[], int n, int x) {
	    int ind=binar(arr,n,x);
	    if(ind==-1)
	    return 0;
	    int left=ind-1;
	    int ctr=1;
	    while(left>=0&&arr[left]==x)
	    {
	        ctr++;
	        left--;
	    }
	    int right=ind+1;
	    while(right<n&&arr[right]==x){
	        ctr++;
	        right++;
	    }
	    return ctr;
	}
};
