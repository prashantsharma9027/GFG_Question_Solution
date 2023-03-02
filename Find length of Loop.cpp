/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    // Code here
    Node * slow = head;
    Node * fast = head;
    int count = 0;
    
    while(slow!=NULL && fast!=NULL)
    {
        fast = fast->next;
        if(fast!=NULL)
        {
            fast = fast -> next;
        }
        
        slow = slow->next;
        
        if(slow == fast)
        {
            count++;
            slow = slow->next;
            while(slow != fast)
            {
                slow = slow->next;
                count++;
            }
            
            return count;
        }
    }
    
    return 0;
}