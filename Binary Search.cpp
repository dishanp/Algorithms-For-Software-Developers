class Solution{
public:
    int binarysearch(int arr[], int n, int k){
        int low=0;
        int high=n-1;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]==k)
            return mid;
            else if(arr[mid]>k)
            high-=1;
            else
            low+=1;
        }
        return -1;
    }
};
