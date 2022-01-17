class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
         vector<int>ans;
         if(!root)
         return ans;
         map<int,int>m;
         queue<pair<Node*,int>>q;
         q.push({root,0});
         while(!q.empty()){
             auto x=q.front();
             q.pop();
             Node *temp=x.first;
             int line=x.second;
             if(m.find(line)==m.end())
             m[line]=temp->data;
             if(temp->left)
             q.push({temp->left,line-1});
             if(temp->right)
             q.push({temp->right,line+1});
         }
         for(auto i:m)
         ans.push_back(i.second);
         return ans;
    }

};
