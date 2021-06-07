class Solution {
public:
    void dfs(vector<vector<char>>& grid,int row,int col,int i,int j){
        if(i<0||j<0||i>=row||j>=col||grid[i][j]!='1')
            return;
        grid[i][j]='2';
        dfs(grid,row,col,i+1,j);
        dfs(grid,row,col,i-1,j);
        dfs(grid,row,col,i,j+1);
        dfs(grid,row,col,i,j-1);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int count=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='1'){
                dfs(grid,r,c,i,j);
                count++;
                }
            }
        }
        return count;
    }
};
