class Solution {
public:
    char slowestKey(vector<int>& r, string k) {
        for(int i=r.size()-1;i>0;i--){
            r[i]-=r[i-1];
        }
        int min=INT_MIN;
        char x='A';
        for(int i=0;i<r.size();i++){
            if(r[i]>min||r[i]==min&&k[i]>x){
                    min=r[i];
                    x=k[i];  
            }
        }
        return x;
}
};
