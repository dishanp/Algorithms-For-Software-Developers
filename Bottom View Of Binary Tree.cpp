vector <int> bottomView(Node *root) {
        vector<int> ans;
        if(root==NULL)
            return ans;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        map<int,int> mp;
        while(!q.empty()){
            int hd=q.front().second;
            Node* temp=q.front().first;
            q.pop();
            mp[hd]=temp->data;
            if(temp->left!=NULL)
                q.push({temp->left,hd-1});
            if(temp->right!=NULL)
                q.push({temp->right,hd+1});
        }
        
        for(auto it=mp.begin();it!=mp.end();it++){
            ans.push_back(it->second);
        }
        return ans;
    }
