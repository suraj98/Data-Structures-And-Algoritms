/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    queue<TreeNode*>q ;
    q.push(A);
    vector<vector<int> >soln ;
    int cnt = 0 ;
    TreeNode* temp ;
    while(!q.empty())
    {
        temp = q.front();
        int siz = q.size();
        vector<int>vec;
        while(siz--)
        {
            temp = q.front();
            if(temp->left)
                q.push(temp->left);
            
            if(temp->right)
                q.push(temp->right);
            
            vec.push_back( temp->val );
            q.pop();
        }
        soln.push_back(vec);
        cnt++;
    }
    
    return soln ;
}
