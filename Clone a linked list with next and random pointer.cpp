//https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1

class Solution
{
    private:
    void insertAtNode(Node *&head , Node *&tail , int d)
    {
        Node* newNode = new Node(d);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    public:
    Node *copyList(Node *head)
    {
        //Write your code here
        Node *cloneHead = NULL;
        Node *cloneTail = NULL;
        
        Node* temp = head;
        
        while(temp!=NULL)
        {
            insertAtNode(cloneHead , cloneTail , temp->data);
            temp = temp->next;
        }
        
        unordered_map<Node * , Node *> oldtonew;
        
        Node *originalNode = head;
        Node *cloneNode = cloneHead;
        
        
        while(originalNode!= NULL)
        {
            oldtonew[originalNode]=cloneNode;
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }
        
        originalNode = head;
        cloneNode = cloneHead;
        
        while(originalNode!=NULL)
        {
            cloneNode->arb = oldtonew[originalNode->arb];
            cloneNode = cloneNode->next;
            originalNode = originalNode->next;
        }
        
        return cloneHead;
    }

};