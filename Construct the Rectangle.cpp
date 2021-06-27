class Solution {
public:
    vector<int> constructRectangle(int area) {
        int j=1;
        int i=1;
        int l,w;
        int min=INT_MAX;
        for(;i;i++){
            if((j*i)==area){
                if(abs(i-j)<min){
                if(i>j){
                    l=i;
                    w=j;
                }
                else{
                    l=j;
                    w=i;
                }
                    min=abs(i-j);
                }  
            }
            if(i==area)
            {
                ++j;
                i=1;
            }
            if(j==area)
                break;
        }
        vector<int>res;
        res.push_back(l);
        res.push_back(w);
        return res;
    }
};
