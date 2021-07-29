class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int j=0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=0)
                a[j++]=a[i];
        }
        for(;j<a.size();j++)
            a[j]=0;
    }
};
