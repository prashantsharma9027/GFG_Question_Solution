class Solution
{
public:

    Node * removeDuplicates(struct Node *head)
    {
        // Your code here
        Node* curr = head;
    	Node* back = head;
    	
        while(curr != NULL)
        {
            if(curr->data != back->data)
            {
                back->next = curr;
                curr->prev = back;
                back = curr;
            }
            curr = curr->next;
        }
        
        back->next = NULL;
        
        return head;
    }
};