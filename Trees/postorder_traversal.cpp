/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void postorder( TreeNode* A , vector<int>&v)
{
    if(A == NULL )
    {
        return ;
    }
    postorder( A->left , v);
    postorder( A->right , v);
    v.push_back(A->val);
}
vector<int> Solution::postorderTraversal(TreeNode* A) 
{
    vector<int>v;
     postorder(A,v);
     return v;
}
