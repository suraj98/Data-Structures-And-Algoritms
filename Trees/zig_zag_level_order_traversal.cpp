/*Given a binary tree, return the zigzag level order traversal of its nodes’ values. 
(ie, from left to right, then right to left for the next level and alternate between).

Question Link : https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1

Soln : This question can be solved by two stacks .We take left stack and right stack and and push it in spiral form.

Code:-
*/
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

void printSpiral(Node *root)
{
     stack<Node*>right_stack;
     stack<Node*>left_stack;       
     if(root)
     {
        left_stack.push(root);
        cout<<root->data<<" ";
        while(!left_stack.empty())
        {
    
        while(!left_stack.empty())
        {
              Node* temp = left_stack.top();
              left_stack.pop();
              if(temp->left)
              {
                cout<<temp->left->data<<" ";
                right_stack.push(temp->left);
              }
              if(temp->right)
              {
                cout<<temp->right->data<<" ";
                right_stack.push(temp->right);
              }
        }
        
        while(!right_stack.empty())
        {
            Node* temp = right_stack.top();
            right_stack.pop();
            if(temp->right)
            {
                cout<<temp->right->data<<" ";
                left_stack.push(temp->right);
            }
            if(temp->left)
            {
                cout<<temp->left->data<<" ";
                left_stack.push(temp->left);
            }
             
        }
        
        }  
     }  
}
