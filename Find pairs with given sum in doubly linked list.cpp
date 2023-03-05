class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        vector<pair<int, int>> ans;
        
        
        
        Node * temp1 = head;
        
        
        
        Node * tail = head;
        while(tail->next != NULL)
            tail = tail->next;
        
        Node * temp2 = tail;
        
        
        
        
        while(temp1->data < temp2->data){
            
            int sum = temp1->data + temp2->data;
            
            if(sum == target){
                ans.push_back( {temp1->data , temp2->data} );
                temp1 = temp1->next;
                temp2 = temp2->prev;
            }
                
                
            else if(sum<target)
                temp1 = temp1->next;
                
            else 
                temp2 = temp2->prev;
            
        }


        return ans;
    }
};