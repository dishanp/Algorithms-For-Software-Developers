class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int mini=INT_MAX;
	    int ind;
	    for(int i=0;i<n;i++){
	        if(arr[i]<mini){
	            mini=arr[i];
	            ind=i;
	        }
	    }
	   return ind;
	}

};
