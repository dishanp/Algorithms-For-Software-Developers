class Solution {
public:
    void util(vector<vector<int>>& image, int i, int j,int color,int newColour){
        if(i<0||j<0||i>=image.size()||j>=image[0].size()||image[i][j]!=color){
            return;
        }
        image[i][j]=newColour;
        util(image,i+1,j,color,newColour);
        util(image,i-1,j,color,newColour);
        util(image,i,j+1,color,newColour);
        util(image,i,j-1,color,newColour);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor)
            return image;
        util(image,sr,sc,image[sr][sc],newColor);
        return image;
    }
};
