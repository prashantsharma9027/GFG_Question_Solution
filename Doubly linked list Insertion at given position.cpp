/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

//Function to insert a new node at given position in doubly linked list.
void addNode(Node *head, int pos, int data)
{
   // Your code here
   Node * temp = head;
   
   Node* newNode = new Node(data);
   
   int count = 0;
   
   while(count<pos)
   {
            count++;
            temp = temp->next;
   }
   
   newNode->next = temp->next;
   newNode->prev = temp;
   temp->next = newNode;
   