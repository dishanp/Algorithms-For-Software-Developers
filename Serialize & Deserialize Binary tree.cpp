class Solution
{
    public:
   //Function to serialize a tree and return a list containing nodes of tree.
   void preOrder(Node *n , vector<int> &arr){
       if(!n){
           arr.push_back(-1);
           return;
       } 
       arr.push_back(n->data);
       preOrder(n->left , arr);
       preOrder(n->right , arr);
   }
   vector<int> serialize(Node *root) 
   {
       vector<int> ans;
       preOrder(root , ans);
       return ans;
   }
   
   //Function to deserialize a list and construct the tree.
   Node * func(vector<int> &A , int &N){
       if(A.size() == N || A[N] == -1){
           N++;
           return NULL;    
       }
       Node *node = new Node(A[N]);
       N++;
       node->left = func(A , N);
       node->right = func(A , N);
       return node;
       
   }
   Node * deSerialize(vector<int> &A)
   {
       int v = 0;
       return func(A , v);
   }

};
