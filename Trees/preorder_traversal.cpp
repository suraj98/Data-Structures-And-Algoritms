/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void preorder( TreeNode* A , vector<int>&v)
{
    if(A == NULL )
    {
        return ;
    }
    v.push_back(A->val);
    preorder( A->left , v);
    preorder( A->right , v);
    
}
vector<int> Solution::preorderTraversal(TreeNode* A) {
     vector<int>v;
     preorder(A,v);
     return v;
}
