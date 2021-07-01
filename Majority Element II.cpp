class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
         unordered_map<int,int>u;
        int size=a.size();
        vector<int>res;
        int f=size/3;
        for(int i=0;i<size;i++){
            u[a[i]]++;
        }
        for(int i=0;i<size;i++){
            if(u[a[i]]>f){
             u[a[i]]=0; 
             res.push_back(a[i]);
            }
        }
       return res; 
    }
};
