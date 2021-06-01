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
void BFS(vector<vector<int>>g){
    queue<int>q;
    int start=0;
    int i,j;
    i=start;
    int n=5;
    int visited[5]={0}; 
    cout<<i<<" ";
    visited[i]=1;
    q.push(i);
    while(!q.empty()){
        i=q.front();
        q.pop();
        for(int j=1;j<n;j++){
            if(g[i][j]==1&&visited[j]==0){
                cout<<j<<" ";
                visited[j]=1;
                q.push(j);
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
    BFS(g);
    return 0;
}
