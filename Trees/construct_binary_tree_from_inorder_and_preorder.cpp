/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
int search(vector<int> &in ,int start,int end,int data)
{
    for(int i=start;i<=end;i++)
    {
        if(in[i] == data)
        {
            return i ;
        }
    }
}
TreeNode* buildtr(vector<int> &pre, vector<int> &in , int start , int end , int* pos)
{
    if(start >  end )
    {
        return NULL ;
    }
    TreeNode* tr = new TreeNode(pre[(*pos)]);
    (*pos) = (*pos)+1;
   
    if(start == end )
    {
        return tr ;
    }
    int index = search(in,start,end,tr->val);
    tr->left = buildtr(pre,in , start ,index-1, pos);
    tr->right = buildtr(pre, in , index+1 ,end ,pos);
    
    return tr ;
}
TreeNode* Solution::buildTree(vector<int> &pre, vector<int> &in)
{
    int len1 = 0 ;
    int len = in.size() ;
    return buildtr( pre , in , 0 , len-1 , &len1);
}
