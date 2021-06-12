class Solution
{
    public:
    void util(int row,int col,int i,int j,vector<vector<char>>&grid){
        if(i<0||j<0||i>=row||j>=col||grid[i][j]!='1'){
            return;
        }
        grid[i][j]='2';
        util(row,col,i+1,j,grid);
        util(row,col,i-1,j,grid);
        util(row,col,i,j+1,grid);
        util(row,col,i,j-1,grid);
        
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int row=grid.size();
        int col=grid[0].size();
        int ctr=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1')
                {
                    util(row,col,i,j,grid);
                    ctr++;
                }
            }
        }
        return ctr;
    }
};
