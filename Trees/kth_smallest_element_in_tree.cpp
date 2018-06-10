/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void func(TreeNode* A,int* k,int* soln)
 {
     if(A)
     { 
         func( A->left, k , soln);
         (*k) = (*k)-1;
           if( (*k) == 0)
         {
             (*soln) = A->val ;
         }
         func( A->right, k , soln);
     }
     
 }
int Solution::kthsmallest(TreeNode* A, int B) 
{ 
    int soln =-1;
    func( A, &B , &soln);
    return soln;
}
