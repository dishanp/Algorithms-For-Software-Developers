int kthDigit(int A,int B,int k){
        long long res=pow(A,B);
        int ctr=1;
        while(res){
            if(ctr==k)
            return res%10;
            res/=10;
            ctr++;
        }
        return -1;
    }
