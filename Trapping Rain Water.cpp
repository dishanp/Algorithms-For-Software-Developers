class Solution{
  public:
  int trapped(int arr[],int n){
    int res=0;
    int left=0;
    int right=0;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
      if(arr[lo]<arr[hi]){
        if(arr[lo]>left)
          left=arr[lo];
        else
          res+=left-arr[lo];
        lo++;
      } 
      else{
          if(arr[hi]>right)
          right=arr[hi];
        else
          res+=right-arr[hi];
        hi--;
      }
  }
    return res;
}
