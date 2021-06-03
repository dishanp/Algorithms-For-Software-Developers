/*
The power of an integer x is defined as the number of steps needed to transform x into 1 using the following steps:

if x is even then x = x / 2
if x is odd then x = 3 * x + 1
For example, the power of x = 3 is 7 because 3 needs 7 steps to become 1 (3 --> 10 --> 5 --> 16 --> 8 --> 4 --> 2 --> 1).

Given three integers lo, hi and k. The task is to sort all integers in the interval [lo, hi] by the power value in ascending order, if two or more integers have the same power value sort them by ascending order.

Return the k-th integer in the range [lo, hi] sorted by the power value.

Notice that for any integer x (lo <= x <= hi) it is guaranteed that x will transform into 1 using these steps and that the power of x is will fit in 32 bit signed integer.

Example :

Input: lo = 12, hi = 15, k = 2
Output: 13
Explanation: The power of 12 is 9 (12 --> 6 --> 3 --> 10 --> 5 --> 16 --> 8 --> 4 --> 2 --> 1)
The power of 13 is 9
The power of 14 is 17
The power of 15 is 17
The interval sorted by the power value [12,13,14,15]. For k = 2 answer is the second element which is 13.
Notice that 12 and 13 have the same power value and we sorted them in ascending order. Same for 14 and 15.
*/

class Solution {
public:
    int steps(int n,int s){
        if(n==1)
            return s;
        if(n%2==0)
            return steps(n/2,++s);
        return steps(((3*n)+1),++s);
    }
    int getKth(int lo, int hi, int k) {
        vector<int>a;
        for(int i=lo;i<=hi;i++){
            a.push_back(i);
        }
        for(int i=0;i<a.size()-1;i++){
            int eff_ctr=0;
            for(int j=0;j<a.size()-i-1;j++){
                if(steps(a[j],0)>steps(a[j+1],0)){
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    eff_ctr++;
                }
            }
            if(!eff_ctr){
                break;
            }
        }
        return a[k-1];
    } 
};
