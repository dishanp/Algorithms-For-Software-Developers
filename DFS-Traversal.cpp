#include<bits/stdc++.h>
using namespace std;
void init(vector<vector<int>>&g,int n){
    for(int i=0;i<n;i++){
        vector<int> v;
        for(int j=0;j<n;j++)
        {
            if((i+j)%2==0){
                v.push_back(0);
            }
            else{
                v.push_back(1);
            }
        }
        g.push_back(v);
    }
}
void DFS(vector<vector<int>>g,int start,int n){
   static int visited[5]={0};
   if(visited[start]==0){
       cout<<start<<" ";
       visited[start]=1;
       for(int j=1;j<n;j++){
           if(g[start][j]==1&&visited[j]==0){
               DFS(g,j,n);
           }
       }
   }
    
}
void display(vector<vector<int>>g){
   for(int i=0;i<g.size();i++){
        for(int j=0;j<g[i].size();j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }  
    cout<<endl;
}
int main(){
    vector<vector<int>>g;
    init(g,5);
    display(g);
    DFS(g,0,5);
}
