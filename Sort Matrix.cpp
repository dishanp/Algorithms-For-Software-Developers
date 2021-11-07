class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> m) {
        vector<int>temp;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++)
            {
                temp.push_back(m[i][j]);
            }
        }
        sort(temp.begin(),temp.end());
        int k=0;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++)
            {
                m[i][j]=temp[k++];
            }
        }
        return m;
    }
};
