//https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node * temp = head;
        
        int count1 = 0;
        int count2 = 0;
        int count3 = 0;
        
        while(temp!=NULL)
        {
            if(temp->data == 0)
            {
                count1++;
            }
            else if(temp->data == 1)
            {
                count2++;
            }
            else if(temp->data == 2)
            {
                count3++;
            }
            
            temp = temp->next;
        }
        
        
        temp = head;
        
        while(temp!=NULL)
        {
            if(count1!=0)
            {
                temp->data = 0;
                count1--;
            }
            
            else if(count2!=0){
                    temp->data = 1;
                    count2--;
            } 
            else if(count3!=0){
                    temp->data = 2;
                    count3--;
                }     
            
            temp = temp->next;
        }
        
        return head;
    }
};