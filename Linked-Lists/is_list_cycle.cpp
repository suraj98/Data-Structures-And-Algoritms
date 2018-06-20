/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
   
    ListNode* slow = A ;
    ListNode* fast = A;
    
/*    
    //*** USING HASHING METHOD ***
    unordered_map< ListNode*,int> ll ;
    while(slow->next)
    {
        ll[slow]++;
        if(ll[slow] >1)
        {
           return slow ; 
        }
        slow = slow->next;
    }
    
 */ 
    
    bool isCycle = false ;
    if( !(A->next) || !(A->next->next) )
        return NULL;
    
    while( (fast) && (fast->next) && (slow) && (slow->next))
    {
         slow = slow->next ;
         if(fast->next == NULL)
            return NULL;
            
         fast = fast->next->next ;
         if( slow == fast)
         {
            isCycle = true;
            break;
         }
    }
    
    if(!isCycle)
       return NULL;
       
    slow = A ;
    while( slow != fast )
    {
        slow = slow->next;
        fast = fast->next ;
    }
    
    return slow ;
   
}
