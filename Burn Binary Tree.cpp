/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void inorder(TreeNode* A, unordered_map<int, vector<int>> &mp){

    if(!A) return;

    inorder(A->left, mp);

    if(A->left){

        mp[A->val].push_back(A->left->val);

        mp[A->left->val].push_back(A->val);

    }

    if(A->right){

        mp[A->val].push_back(A->right->val);

        mp[A->right->val].push_back(A->val);

    }

    inorder(A->right, mp);

}


int Solution::solve(TreeNode* A, int B) {

    unordered_map<int, vector<int> > mp;

    inorder(A, mp);

    unordered_map<int, int> isVisited;

    queue<int> q;

    q.push(B);

    isVisited[B]=1;

    int sec=-1;

    while(!q.empty()){

        vector<int> v;

        while(!q.empty()){

            isVisited[q.front()]=1;

            for(auto n: mp[q.front()]){

                if(!isVisited[n]){

                    v.push_back(n);

                }

            }

            q.pop();

        }

        if(v.size()>0){

            for(auto num: v) q.push(num);

        }

        sec++;

    }

    return sec;

}



