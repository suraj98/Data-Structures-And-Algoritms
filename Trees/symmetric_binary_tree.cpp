/**
 *Question Link :https://www.interviewbit.com/problems/symmetric-binary-tree/
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool test(TreeNode* p ,TreeNode* q)
{
    if( (p==NULL) && (q ==NULL) )
        return true ;
        
    if( (p==NULL) || (q ==NULL) )
      return false ;
    
    return ( (p->val == q->val) && test( p->left , q->right)  && test(p->right ,q->left) );
    
}
int Solution::isSymmetric(TreeNode* A) 
{
    if(!A)
    {
    return 1 ;        
    }
    return test(A->left ,A->right);
}
