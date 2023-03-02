
Node* deleteMid(Node* head)
{
    // Your Code Here
    
    Node * slow = head;
    Node * fast = head;
    Node * temp = NULL;
    
    while( fast!= NULL && fast->next != NULL){

        temp=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    
    temp ->next = slow->next;
    
    return head;
}