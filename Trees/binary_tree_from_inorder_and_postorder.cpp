/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int search(vector<int> &in , int start , int end,int value)
{
    for(int i=start;i<=end;i++)
    {
        if(in[i] == value)
        {
            return i ;
        }
    }
}

TreeNode* build(vector<int> &in, vector<int> &post,int start , int end ,int* pos)
{
    if(start > end) return NULL;    
    TreeNode* new1 = new TreeNode( post[(*pos)]); 
    int index = search(in,start,end,new1->val);
    (*pos) = (*pos)-1 ;   
    if(start == end) return new1;
    new1->right =  build(in, post,index+1, end ,pos);
    new1->left  =  build(in, post,start,index-1 ,pos);
    return new1;
}


TreeNode* buildTr(vector<int> &in, vector<int> &post, int n)
{
    int p = n-1 ;
    return build(in,post,0,n-1,&p) ;
}


TreeNode* Solution::buildTree(vector<int> &in, vector<int> &post) {
    return buildTr(in, post,post.size());
}
