class Solution {
public:
    int dig(int no){
        int sum=0;
        while(no){
            sum+=no%10;
            no/=10;
        }
        return sum;
    }
    int countEven(int num) {
        int ctr=0;
        for(int i=2;i<=num;i++){
            if(dig(i)%2==0)
                ++ctr;
        }
        return ctr;
    }
};
