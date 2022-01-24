#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void util(vector<string>&res,vector<vector<int>>&m,int n,vector<vector<int>>vis,int x,int y,string path){
        if(x==n-1 && y==n-1){
            res.push_back(path);
            return;
        }
        vis[x][y]=1;
        int new_x,new_y;
        
        new_x=x+1;
        new_y=y;
        if((new_x>=0 && new_y>=0) && (new_x<n && new_y<n) && vis[new_x][new_y]==0 && m[new_x][new_y]==1){
            path.push_back('D');
            util(res,m,n,vis,new_x,new_y,path);
            path.pop_back();
        }
        
        new_x=x-1;
        new_y=y;
        if((new_x>=0 && new_y>=0) && (new_x<n && new_y<n) && vis[new_x][new_y]==0 && m[new_x][new_y]==1){
            path.push_back('U');
            util(res,m,n,vis,new_x,new_y,path);
            path.pop_back();
        }
        
        new_x=x;
        new_y=y+1;
        if((new_x>=0 && new_y>=0) && (new_x<n && new_y<n) && vis[new_x][new_y]==0 && m[new_x][new_y]==1){
            path.push_back('R');
            util(res,m,n,vis,new_x,new_y,path);
            path.pop_back();
        }
        
        
        new_x=x;
        new_y=y-1;
        if((new_x>=0 && new_y>=0) && (new_x<n && new_y<n) && vis[new_x][new_y]==0 && m[new_x][new_y]==1){
            path.push_back('L');
            util(res,m,n,vis,new_x,new_y,path);
            path.pop_back();
        }
        
        vis[new_x][new_y]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string>res;
        if(m[0][0]==0)
        return res;
        int x=0;
        int y=0;
        vector<vector<int>>vis=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                vis[i][j]=0;
            }
        }
        util(res,m,n,vis,x,y,"");
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
