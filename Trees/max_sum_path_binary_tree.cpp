/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
int max(int a,int b)
{
     return (a>b)?a:b;
}

int func(TreeNode* A,int& maxx)
{
    if(A == NULL)
       return 0;
        
    int left =  func(A->left,maxx);
    int right = func(A->right,maxx);
    int max_single = max(max(left,right)+A->val,A->val);
    int sum = max(left+right+A->val,max_single);
    (maxx) = max(sum,maxx);
    return max_single ;
}

int Solution::maxPathSum(TreeNode* A) 
{
     int maxx = INT_MIN ;
     func( A, maxx) ;
     return maxx ;
}
