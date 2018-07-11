struct Node
{
  int data;
  Node *next;
};
 */
void sortedInsert(Node** head_ref, int x)
{
   Node *temp = (*head_ref) ;
   Node *prev ;
   Node* node = new Node() ;
   node->data = x ;
   
   if(temp->data > x)
   {
       Node* te = temp ;
       while(te->next != temp)
       {   te = te->next ; }
       node->next = temp ;
       te->next = node ;
       (*head_ref) = node ;
   }
   else
   {
     while( (temp->next!= (*head_ref) ) && (x>temp->next->data ) )
        {
           prev = temp ;
           temp = temp->next ;
        }
        node->next = temp->next;
        temp->next = node ;
   
    }
   
}
