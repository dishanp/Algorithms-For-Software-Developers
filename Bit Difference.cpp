class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int util(int n){
        int ctr=0;
        while(n){
            n=n&(n-1);
            ++ctr;
        }
        return ctr;
    }
    int countBitsFlip(int a, int b){
       return util(a^b);
    }
};
