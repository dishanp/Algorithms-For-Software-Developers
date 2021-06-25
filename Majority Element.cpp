int majorityElement(int a[], int size)
    {
        unordered_map<int,int>u;
        int f=size/2;
        for(int i=0;i<size;i++){
            u[a[i]]++;
        }
        for(int i=0;i<size;i++){
            if(u[a[i]]>f)
             return a[i];
        }
       return -1; 
    }
