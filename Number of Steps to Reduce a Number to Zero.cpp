class Solution {
public:
    int ctr=0;
    int numberOfSteps(int num) {
        if(num==0)
        return ctr; 
        if(num%2==0)
        {
            ++ctr;
            return numberOfSteps(num/2);
        }
        ++ctr;
        return numberOfSteps(num-1);
    }
};
