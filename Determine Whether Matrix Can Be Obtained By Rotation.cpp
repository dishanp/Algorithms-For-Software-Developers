class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        for(int i=0;i<m.size();i++){
            for(int j=i+1;j<m[i].size();j++){
                int temp=m[i][j];
                m[i][j]=m[j][i];
                m[j][i]=temp;
            }
        }
        for(int i=0;i<m.size();i++)
            reverse(m[i].begin(),m[i].end());
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int i=0;
        while(i<4){
        rotate(mat);
            ++i;
        if(mat==target)
            return true;
        }
        return false;
    }
};
