void util(Node* node,vector<int>&res){
    if(!node)
    return;
    if(node->left&&!node->right)
      res.push_back(node->left->data);
    else if(node->right&&!node->left)
      res.push_back(node->right->data);
    util(node->left,res);
    util(node->right,res);
}
vector<int> noSibling(Node* node)
{
    vector<int>res;
    if(!node)
    return res;
    util(node,res);
    if(res.empty())
    res.push_back(-1);
    sort(res.begin(),res.end());
    return res;
}
