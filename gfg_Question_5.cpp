//https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1
class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here

     map<int,bool> mp;
     Node* curr = head;
     mp[head->data] = true;
     
     while(curr!=NULL && curr->next!=NULL)
     {
         Node* temp = curr->next;
         if(mp[temp->data]!=true)
         {
              mp[temp->data] = true;
              curr = temp;
         }
         
         else
         {
                Node* pointt = temp->next;
                curr->next = pointt;
                delete(temp);
         }
     }
     
     return head;
    }
};