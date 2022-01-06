class Solution{
public:
    int totalJumps(int X, int Y, int N, int arr[]){
        // code here
        int ctr=0;
        for(int i=0;i<N;i++){
            if(arr[i]<=X){
                ++ctr;
                continue;
            }
            else{
                int d=X-Y;
                while(arr[i]>0){
                    ++ctr;
                    arr[i]-=d;
                    if(arr[i]<=X){
                        ++ctr;
                        break;
                    }
                }
            }
        }
        return ctr;
    }
};
