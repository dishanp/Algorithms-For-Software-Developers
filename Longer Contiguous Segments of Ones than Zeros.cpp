class Solution {
public:
    
    bool checkZeroOnes(string st) {
        int s=0;
        int max1=0;
        for(int i=0;i<st.size();i++){
            if(st[i]=='1')
            {
                ++s;
                if(s>max1)
                    max1=s;
            }
            else{
                s=0;
            }
        }
       s=0;
        int max2=0;
        for(int i=0;i<st.size();i++){
            if(st[i]=='0')
            {
                ++s;
                if(s>max2)
                    max2=s;
            }
            else{
                s=0;
            }
        }
       if(max1>max2)
           return true;
        return false;
    }
};
