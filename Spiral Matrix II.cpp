class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        vector<vector<int> > vv(n, vector<int>(n));
    
        int rowStart = 0, rowEnd = n - 1;
        int colStart = 0, colEnd = n - 1;
        int cnt = 1;
    
        while(rowStart <= rowEnd && colStart <= colEnd)
        {
            for(int i = colStart; i<= colEnd; i++)
                vv[rowStart][i] = cnt++;
            rowStart++;
        
            for(int i = rowStart; i<= rowEnd; i++)
                vv[i][colEnd] = cnt++;
            colEnd--;
        
            for(int i = colEnd; i>= colStart; i--)
                vv[rowEnd][i] = cnt++;
            rowEnd--;
        
            for(int i = rowEnd; i>= rowStart; i--)
                vv[i][colStart] = cnt++;
            colStart++;
            
        }
    
        return vv;
    }
};
