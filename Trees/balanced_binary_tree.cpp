/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int balance(TreeNode* A,int* state)
 {
    if (A == NULL)
    {
        return -1;
    }
    int lef   = 1   +   balance(A->left,state);
    int right = 1   +   balance(A->right,state);
    int diff  = abs(lef-right);
    if(diff > 1)
    {
        (*state)=0;
    }
 }
int Solution::isBalanced(TreeNode* A) 
{
   int a = 1;
   balance(A,&a);
   return a ;
}
