/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
TreeNode* Solution::invertTree(TreeNode* A)
{
    queue<TreeNode*>q;
    q.push(A);
    while(!q.empty())
    {
        TreeNode* t = q.front();
        q.pop();
        TreeNode *l,*r;
        if(t->left)
        {
            q.push(t->left);
            l= t->left ;
        }
        else
        {
            l=NULL;
        }
       
        if(t->right) 
        {
            q.push(t->right);
            r = t->right ;
        }
        else
        {
            r =NULL;
        }
        
        TreeNode* tem = NULL ;
        if(l) tem = l ;
        t->left = t->right;
        t->right = tem ;
        
    }
    
    return A;
    
}
