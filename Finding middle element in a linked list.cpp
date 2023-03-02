class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        Node * slow = head;
        Node * fast = head->next;
        
        while(fast!=NULL)
        {
            fast = fast -> next;
            if(fast!=NULL)
            {
                fast = fast -> next;
            }
            
            slow = slow -> next;
        }
        
        return slow->data;
    }
};