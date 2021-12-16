class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int n=matrix.size();
        int m=matrix[0].size();
        
        // start from the [first row, last column] element
        int i=0;
        int j=m-1;
        while(i<n && j>=0){
            if(matrix[i][j]==target) // target found
                return true;
            else if(matrix[i][j]>target) //target is smaller, go leftwards
                --j; // decrease the column index
            else // target is larger, go downwards
                ++i; // increase the row index
        }
        return false; // target not found
    }
};
