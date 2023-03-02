/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        
        //Node * temp = head;
        
        Node * curr = head;
        
        Node * prev = NULL;
        
        Node * nextt = NULL;
        
        while(curr!=NULL)
        {
            nextt = curr->next; 
            curr->next = prev;
            prev = curr;
            curr = nextt;
        }
        
        head = prev;
         
        return head;
    }
    
};