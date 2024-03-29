class Solution {
public:
    int addDigits(int num) {
        if(num==0)
            return 0;
        return util(num);
    }
    int util(int num){
        if(num/10==0)
            return num;
        int sum=0;
        while(num){
            sum+=num%10;
            num/=10;
        }
        return util(sum);
    }
};
