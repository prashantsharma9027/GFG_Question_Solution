class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        
        Node * ans = new Node(0);
        
        Node* head1 = ans;
        Node * tail1 = ans;
        
        Node * temp = head;
        
        while(temp!=NULL)
        {
            if(temp->data%2==0)
            {
                Node * temp1 = new Node(temp->data);
                tail1->next = temp1;
                tail1 = temp1;
            }
            
            temp = temp->next;
        }
        
        temp = head;
        
        while(temp!=NULL)
        {
            if(temp->data%2!=0)
            {
                Node * temp1 = new Node(temp->data);
                tail1->next = temp1;
                tail1 = temp1;
            }
            
            temp = temp->next;
        }
        
        ans = ans->next;
        
        return ans;
    }
};