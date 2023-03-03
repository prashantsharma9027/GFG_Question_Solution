class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        unordered_map<int , bool> map;
        Node * ans = new Node(-1);
        Node * x = ans;
        
        while(head2!=NULL)
        {
             map[head2->data]=true;
             head2 = head2-> next;
        }
        
        while(head1!=NULL)
        {
            if(map[head1->data]==true)
            {
                Node * temp = new Node(head1->data);
                x->next = temp;
                x = x->next;
            }
            head1 = head1->next;
        }
        
        return ans -> next;
    }
};