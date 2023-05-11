class compare{
    public:
        bool operator()(Node* a , Node* b)
        {
            return a->data > b->data;
        }
};

class Solution{
    
    
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
        
        priority_queue<Node* , vector<Node*> , compare> minHeap;
        
           
        for(int i = 0 ;i<K ; i++)
        {
            minHeap.push(arr[i]);
        }
        
        Node* head = NULL;
        Node* tail = NULL;
        
        while(minHeap.size()>0)
        {
            Node * top = minHeap.top();
            minHeap.pop();
            
            if(top->next != NULL)
            {
                minHeap.push(top -> next);
            }
            
            if(head == NULL)
            {
                head = top;
                tail = top;
            }
            else
            {
                tail -> next = top;
                tail = tail->next;
            }
            
        }
        
        return head;
    }
};