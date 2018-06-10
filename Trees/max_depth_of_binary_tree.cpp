/**
 * Question link :https://www.interviewbit.com/problems/max-depth-of-binary-tree/
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int max (int a ,int b)
 {
     return(a>b)?a:b;
 }
int depth(TreeNode* A)
{
    if(A == NULL)  return 0 ;
    int le =  1+depth(A->left);
    int ri =  1+depth(A->right);
    return max(le,ri);
}
int Solution::maxDepth(TreeNode* A) 
{
    int max1 = 1 ;
    if(!A) return 0;
    return depth(A);   
}
