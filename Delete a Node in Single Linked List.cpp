
/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(x == 1 )
    {
        Node* temp = head;
        head=head->next;
        return head;
    }
    
    Node * curr = head;
    Node * prev = NULL;
    
    int count = 1;
    
    while(count<x)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }
    
    prev->next = curr->next;

    
    return head;
}