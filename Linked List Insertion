class Solution{
  public:
  Node *insertAtBegining(Node *head, int newData) {
   Node *new_node = new Node(newData);
   if(head == NULL)
        return new_node;
    else
    {
        new_node ->next = head;
        return new_node;
    }
}


// function appends the data at the end of the list
Node *insertAtEnd(Node *head, int newData)  {
    Node *new_node = new Node(newData);
    if(head == NULL)
      return new_node;
      
    Node *current = head;
    while(current->next != NULL)
        current = current->next;
        
    current->next = new_node;
    return head;
}
};