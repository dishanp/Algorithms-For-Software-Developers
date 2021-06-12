class Soultion{
  public:
  int isHappy(int n){
        if(n==1)
            return 1;
        if(n==4)
         return 0;
        int rem=0;
        int sum=0;
        while(n){
            rem=n%10;
            sum+=(rem*rem);
            n=n/10;
        } 
        return isHappy(sum);
    }
};
