class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        if(head == NULL || head->next == NULL || k==0)
        {
            return head;
        }
        
        int length = 1;
        Node* curr = head;
        while (curr->next != NULL )
        {
            curr = curr->next;
            length++;
        }
        
        
        curr->next = head;
        
        k = k % length;
        int count = 0;
        
        while(count != k)
        {
            curr = curr->next;
            count++;
        }
        
        head = curr->next ;
        curr->next = NULL;
        
        return head;
    }
};