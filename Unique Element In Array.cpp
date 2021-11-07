class Solution{
  public:
    int findUnique(int a[], int n, int k) {
        sort(a,a+n);
        if(a[0]!=a[1])
        return a[0];
        if(a[n-1]!=a[n-1])
        return a[n-1];
        for(int i=1;i<n-1;i++){
            if(a[i]!=a[i-1]&&a[i]!=a[i+1])
                return a[i];
        }
        return -1;
    }

};
