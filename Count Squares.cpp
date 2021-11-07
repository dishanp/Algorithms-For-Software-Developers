int countSquares(int N) {
        int ctr=0;
        for(int  i=1;i<N;i++){
            if(i*i<N)
            ++ctr;
            else
            break;
        }
        return ctr;
    }
