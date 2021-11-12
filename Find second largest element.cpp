 int print2largest(int arr[], int n)
    {
        int lar=-1;
        int sec=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>lar){
                sec=lar;
                lar=arr[i];
            }
            if(arr[i]>sec&&arr[i]<lar)
            {
                sec=arr[i];
            }
        }
        return sec;
    }
