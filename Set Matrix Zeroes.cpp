class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int r=m.size();
        int c=m[0].size();
        stack<int>rows;
        stack<int>cols;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(m[i][j]==0){
                    rows.push(i);
                    cols.push(j);
                }      
            }
        }
        while(!rows.empty()){
            int a=rows.top();
            rows.pop();
            for(int i=0;i<c;i++)
                m[a][i]=0;
        }
        while(!cols.empty()){
            int a=cols.top();
            cols.pop();
            for(int i=0;i<r;i++)
                m[i][a]=0;
        }
    }
};
