/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
Node* reverseDLL(Node * head)
{
    //Your code here
    
    Node*curr=head;

    Node*prev=NULL;

    Node*next;

    while(curr){

        next=curr->next;

        curr->next=prev;

        curr->prev=next;

        prev=curr;

        curr=next;

    }

    return prev;
}
