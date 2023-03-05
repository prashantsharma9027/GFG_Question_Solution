void sort(Node **head)
{
    Node* ptr1 = *head ;  
    Node* ptr2 = (*head)->next ;
    
    while(ptr2!=NULL || ptr1->next!=NULL)
    {  
        if(ptr1->data > ptr2->data)
        { 
            int temp = ptr1->data ; 
            ptr1->data = ptr2->data ; 
            ptr2->data = temp ;
        }
        
        ptr2= ptr2->next;
        
        if(ptr2==NULL)
        { 
            ptr1 = ptr1->next ;
            ptr2 = ptr1->next;
        }
    }
}