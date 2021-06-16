class Solution
{
public:
bool isUnique(int x){
    bool v[10]={false};
    while(x){
        int rem=x%10;
        if(v[rem]==true)
        return false;
        v[rem]=true;
        x=x/10;
    }
    return true;
}
    vector<int> uniqueNumbers(int L,int R)
    {
        vector<int>res;
        for(int i=L;i<=R;i++){
            if(isUnique(i))
            res.push_back(i);
        }
        return res;
    }
};
