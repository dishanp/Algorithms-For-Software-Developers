class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string>res;
        int diff=INT_MAX;
        string t;
        unordered_map<string,int>u;
        for(int i=0;i<list1.size();i++)
            u[list1[i]]=i+1;
        for(int i=0;i<list2.size();i++){
            if(u[list2[i]]&&abs(u[list2[i]]+i)<=diff){
                diff=abs(u[list2[i]]+i);
                t=list2[i];
            }
        }
        res.push_back(t);
        for(int i=0;i<list2.size();i++){
            if(u[list2[i]]&&abs(u[list2[i]]+i)==diff&&list2[i]!=t){
                res.push_back(list2[i]);
            }
        }
        return res;
    }
};
