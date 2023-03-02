int getNthFromLast(Node *head, int n)
{
       // Your code here
       
       int count = 1;
       Node * temp = head;
       
       while(temp->next!= NULL)
       {
           count++;
           temp = temp->next;
       }
       
       if(count<n) return -1;
       
       int pos = count - n;
       
       count = 1;
       
       temp = head;
       
       while(count<=pos)
       {
           temp = temp->next;
           count++;
       }
       
       return temp->data;
       
}