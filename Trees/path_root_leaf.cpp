/*
  https://practice.geeksforgeeks.org/problems/root-to-leaf-paths/1
*/
/* Structure of Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};*/
/* The function should print all the paths from root
 to leaf nodes of the binary tree */
void func(Node* root,vector<int>&v)
{
   if(root) 
   {
        v.push_back(root->data);
        
        if( (root->left==NULL)  && (root->right==NULL)   )
        {
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
         cout<<"#";
         
        }

        func(root->left,v);
        func(root->right,v);
        
        if(!v.empty())    
             {   v.pop_back();   }
   }
   
   return ;
   
}
void printPaths(Node* root)
{
    vector<int>v ;
    func(root,v);
    cout<<"\n";
}
