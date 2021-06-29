class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)
            return true;
        for(int i=2;i<num;i++){
            if(pow(i,2)==num)
                return true;
            if(i>num/2)
                break;
        }
        return false;
    }
};
