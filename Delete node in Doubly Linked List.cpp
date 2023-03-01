/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
*/

class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      if(x == 1) {
        Node* temp = head_ref;
        temp -> next -> prev = NULL;
        head_ref = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        Node* curr = head_ref;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < x) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;    
        
        
    }
      return head_ref;
    }
};