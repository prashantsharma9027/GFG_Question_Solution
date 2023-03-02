class Solution {
  public:
    void removeNode(struct Node** head_ref, struct Node* curr){
        if(*head_ref == NULL || curr == NULL)
            return;
        if(*head_ref == curr)
            *head_ref = curr->next;
        if(curr->next)
            curr->next->prev = curr->prev;
        if(curr->prev)
            curr->prev->next = curr->next;
    }
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        Node *curr = *head_ref;
        Node *next = curr;
        while(curr!= NULL){
            if(curr->data == x){
                next = curr->next;
                removeNode(head_ref, curr);
                curr = next;
            }else
                curr = curr->next;
        }
    
    }
};