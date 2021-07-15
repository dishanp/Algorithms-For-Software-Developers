int firstIndex(int a[], int n) 
    {
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(a[mid]==1)
            {
                if(a[mid-1]==1){
                    high=mid-1;
                }
                else
                   return mid;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
