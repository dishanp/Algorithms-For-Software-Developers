class Solution{   
public:
    int getOddOccurrence(int a[], int n) {
       unordered_map<int,int>u;
       for(int i=0;i<n;i++)
        u[a[i]]++;
        for(auto i:u)
            if(i.second%2!=0)
            return i.first;
        return -1;
    }
};
