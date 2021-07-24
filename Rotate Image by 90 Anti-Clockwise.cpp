class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& m, int n) 
    { 
        int temp;
        int r=m.size();
        int c= m[0].size();
        for(int i=0;i<r;i++){
            for(int j=i;j<c;j++){
                 temp=m[i][j];
                m[i][j]=m[j][i];
                m[j][i]=temp;
            }
        } 
        for(int i=0;i<c;i++)
       {
           int l=0;
           int h=c-1;
           while(l<h){
               temp=m[l][i];
               m[l][i]=m[h][i];
               m[h][i]=temp;
               l++;
               h--;
           }
           
       }
    } 
};
